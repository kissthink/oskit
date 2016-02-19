/*
 * Copyright (c) 1996-1998, 2001 University of Utah and the Flux Group.
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

#include <stdlib.h>
#include <oskit/dev/dev.h>
#include "timer.h"

volatile unsigned long ticks = 0;

void
bumpticks()
{
	ticks++;
}

int
timer_init(void)
{
	osenv_timer_register(bumpticks, TIMER_FREQ);
	return 0;
}

void
timer_shutdown(void)
{
	osenv_timer_unregister(bumpticks, TIMER_FREQ);
}
