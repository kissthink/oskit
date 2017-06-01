/*
 * Copyright (c) 1994-1995, 1998 University of Utah and the Flux Group.
 * All rights reserved.
 * 
 * This file is part of the Flux OSKit.  The OSKit is free software, also known
 * as "open source;" you can redistribute it and/or modify it under the terms
 * of the GNU General Public License (GPL), version 2, as published by the Free
 * Software Foundation (FSF).  To explore alternate licensing terms, contact
 * the University of Utah at csl-dist@cs.utah.edu or +1-801-585-3271.
 * 
 * The OSKit is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GPL for more details.  You should have
 * received a copy of the GPL along with the OSKit; see the file COPYING.  If
 * not, write to the FSF, 59 Temple Place #330, Boston, MA 02111-1307, USA.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <oskit/debug.h>
#include <oskit/x86/base_vm.h>

#include "dos_io.h"

int dos_open(const char *s, int flags, int mode, dos_fd_t *out_fh)
{
	struct trap_state ts;
	int err = EINVAL; /*XXX*/
	oskit_addr_t dos_buf_phys = (oskit_addr_t)kvtophys(dos_buf);

	assert(dos_buf); assert(dos_buf_phys);
	assert(dos_buf_phys < 0x100000);

	init_ts(&ts);

	if (strlen(s)+1 > DOS_BUF_SIZE)
		return E2BIG;
	strcpy(dos_buf, s);
	ts.v86_ds = dos_buf_phys >> 4;
	ts.edx = dos_buf_phys & 15;

	/* Possible situations:

	-	3d
	C	3d || 3c
	 T	3d (ensure that it exists), close, 3c
	CT	3c
	  X	3d
	C X	3d (ensure that it doesn't exist), 3c
	 TX	3d (ensure that it exists), close, 3c
	CTX	3d (ensure that it doesn't exist), 3c
	*/

	if ((flags & (O_CREAT | O_EXCL | O_TRUNC)) != (O_CREAT | O_TRUNC))
	{
		/* First try opening the file with function 0x3D.  */
		ts.trapno = 0x21;
		ts.eax = 0x3d40 | (flags & O_ACCMODE);
		ts.ecx = 0;
		base_real_int(&ts);
		err = dos_check_err(&ts);
		if (!err)
			*out_fh = ts.eax & 0xffff;
	}

	/* Now based on the result, determine what to do next.  */
	switch (flags & (O_CREAT | O_EXCL | O_TRUNC))
	{
		case 0:
		case 0 | O_EXCL:
			if (!err)
				goto success;
			else
				return err;
		case O_CREAT:
			if (!err)
				goto success;
			else
				break;
		case O_CREAT | O_EXCL:
		case O_CREAT | O_TRUNC | O_EXCL:
			if (!err)
			{
				/* The file exists, but wasn't supposed to.
				   Close it and return an error.  */
				dos_close(ts.eax & 0xffff);
				return EEXIST;
			}
			else
				break;
		case O_TRUNC:
		case O_TRUNC | O_EXCL:
			if (!err)
			{
				/* We've verified that the file exists -
				   now close it and reopen it with CREAT
				   so it'll be truncated as requested.  */
				dos_close(ts.eax & 0xffff);
				break;
			}
			else
				return err;
		case O_CREAT | O_TRUNC:
			/* This is the one case in which
			   we didn't try to open the file above at all.
			   Just fall on through and open it with CREAT.  */
			break;
	}

	/* Now try opening the file with DOS's CREAT call,
	   which truncates the file if it already exists.  */
	ts.trapno = 0x21;
	ts.eax = 0x3c00;
	ts.ecx = mode & S_IWUSR ? 0 : 1;
	base_real_int(&ts);
	if (!(err = dos_check_err(&ts)))
	{
		*out_fh = ts.eax & 0xffff;

		/* We don't have to worry about O_APPEND here,
		   because we know the file starts out empty.  */

		return 0;
	}

	return err;

	success:

	/* If the caller requested append access,
	   just seek to the end of the file once on open.
	   We can't implement full POSIX behavior here without help,
	   since DOS file descriptors don't have an append mode.
	   To get full POSIX behavior,
	   the caller must seek to the end of the file before every write.
	   However, seeking to the end only on open
	   is probably enough for most typical uses.  */
	if (flags & O_APPEND)
	{
		oskit_addr_t newpos;
		err = dos_seek(*out_fh, 0, SEEK_END, &newpos);
		if (err)
		{
			dos_close(*out_fh);
			return err;
		}
	}

	return 0;
}
