/*
 * Copyright (c) 1997-1999 University of Utah and the Flux Group.
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

#ifndef _NETBSD_OSKIT_GLOBAL_H_
#define _NETBSD_OSKIT_GLOBAL_H_

/*
 * Symbols defined by glue code which are used by the NetBSD fs code.
 */
#define allproc fs_netbsd_allproc
#define copyin fs_netbsd_copyin
#define copyinstr fs_netbsd_copyinstr
#define copyout fs_netbsd_copyout
#define copyoutstr fs_netbsd_copyoutstr
#define copystr fs_netbsd_copystr
#define cpl fs_netbsd_cpl
#define curproc fs_netbsd_curproc
#define delay fs_netbsd_delay
#define domains fs_netbsd_domains
#define free fs_netbsd_free
#define gettime fs_netbsd_gettime
#define gopenfile_create fs_netbsd_gopenfile_create
#define imask fs_netbsd_imask
#define inittodr fs_netbsd_inittodr
#define log fs_netbsd_log
#define malloc fs_netbsd_malloc
#define microtime fs_netbsd_microtime
#define mono_time fs_netbsd_mono_time
#define panic fs_netbsd_panic
#define panicstr fs_netbsd_panicstr
#define printf fs_netbsd_printf
#define rootvp fs_netbsd_rootvp
#define sdclose fs_netbsd_sdclose
#define sddump fs_netbsd_sddump
#define sdioctl fs_netbsd_sdioctl
#define sdopen fs_netbsd_sdopen
#define sdsize fs_netbsd_sdsize
#define sdstrategy fs_netbsd_sdstrategy
#define securelevel fs_netbsd_securelevel
#define sleep fs_netbsd_sleep
#define soo_stat fs_netbsd_soo_stat
#define tablefull fs_netbsd_tablefull
#define time fs_netbsd_time
#define tsleep fs_netbsd_tsleep
#define uprintf fs_netbsd_uprintf
#define wakeup fs_netbsd_wakeup
#define wdclose fs_netbsd_wdclose
#define wddump fs_netbsd_wddump
#define wdioctl fs_netbsd_wdioctl
#define wdopen fs_netbsd_wdopen
#define wdsize fs_netbsd_wdsize
#define wdstrategy fs_netbsd_wdstrategy


/*
 * Nops
 */
#define chgproccnt(uid,diff) 0
#define enterpgrp(p,pgid,mksess) 0
#define inferior(p) 0
#define pfind(pid) curproc
#define pgfind(pid) 0
#define munmapfd(p,fd) 0
#define proc0 (*curproc)
#define vnode_pager_umount(mp) 0
#define vnode_pager_setsize(vp,size) 0
#define vnode_pager_uncache(vp) TRUE
#define psignal(p,sig) 0
#define subyte(base,c) (-1)


/*
 * Global symbols defined in the NetBSD fs code.
 */
#define acctp fs_netbsd_acctp
#define astpending fs_netbsd_astpending
#define bclnlist fs_netbsd_bclnlist
#define bswlist fs_netbsd_bswlist
#define bufhash fs_netbsd_bufhash
#define bufhashtbl fs_netbsd_bufhashtbl
#define bufqueues fs_netbsd_bufqueues
#define callfree fs_netbsd_callfree
#define callout fs_netbsd_callout
#define calltodo fs_netbsd_calltodo
#define cfree fs_netbsd_cfree
#define checkdirs fs_netbsd_checkdirs
#define chkvnlock fs_netbsd_chkvnlock
#define cluster_collectbufs fs_netbsd_cluster_collectbufs
#define cluster_newbuf fs_netbsd_cluster_newbuf
#define cluster_rbuild fs_netbsd_cluster_rbuild
#define cluster_wbuild fs_netbsd_cluster_wbuild
#define cnt fs_netbsd_cnt
#define count_lock_queue fs_netbsd_count_lock_queue
#define crcopy fs_netbsd_crcopy
#define crdup fs_netbsd_crdup
#define crfree fs_netbsd_crfree
#define crget fs_netbsd_crget
#define dead_badop fs_netbsd_dead_badop
#define dead_bmap fs_netbsd_dead_bmap
#define dead_ebadf fs_netbsd_dead_ebadf
#define dead_ioctl fs_netbsd_dead_ioctl
#define dead_lock fs_netbsd_dead_lock
#define dead_print fs_netbsd_dead_print
#define dead_read fs_netbsd_dead_read
#define dead_select fs_netbsd_dead_select
#define dead_strategy fs_netbsd_dead_strategy
#define dead_vnodeop_entries fs_netbsd_dead_vnodeop_entries
#define dead_vnodeop_p fs_netbsd_dead_vnodeop_p
#define dead_write fs_netbsd_dead_write
#define desireddquot fs_netbsd_desireddquot
#define dirchk fs_netbsd_dirchk
#define doclusterraz fs_netbsd_doclusterraz
#define doforce fs_netbsd_doforce
#define doingcache fs_netbsd_doingcache
#define dos_partitions fs_netbsd_dos_partitions
#define dqfreelist fs_netbsd_dqfreelist
#define dqhash fs_netbsd_dqhash
#define dqhashtbl fs_netbsd_dqhashtbl
#define dupfdopen fs_netbsd_dupfdopen
#define enoioctl fs_netbsd_enoioctl
#define enosys fs_netbsd_enosys
#define enxio fs_netbsd_enxio
#define eopnotsupp fs_netbsd_eopnotsupp
#define fdalloc fs_netbsd_fdalloc
#define fdavail fs_netbsd_fdavail
#define fdcloseexec fs_netbsd_fdcloseexec
#define fdcopy fs_netbsd_fdcopy
#define fdexpand fs_netbsd_fdexpand
#define fdfree fs_netbsd_fdfree
#define fdrelease fs_netbsd_fdrelease
#define ffs_fifoop_entries fs_netbsd_ffs_fifoop_entries
#define ffs_fsync fs_netbsd_ffs_fsync
#define ffs_specop_entries fs_netbsd_ffs_specop_entries
#define ffs_vnodeop_entries fs_netbsd_ffs_vnodeop_entries
#define fifo_advlock fs_netbsd_fifo_advlock
#define fifo_badop fs_netbsd_fifo_badop
#define fifo_bmap fs_netbsd_fifo_bmap
#define fifo_close fs_netbsd_fifo_close
#define fifo_ebadf fs_netbsd_fifo_ebadf
#define fifo_ioctl fs_netbsd_fifo_ioctl
#define fifo_lock fs_netbsd_fifo_lock
#define fifo_lookup fs_netbsd_fifo_lookup
#define fifo_open fs_netbsd_fifo_open
#define fifo_pathconf fs_netbsd_fifo_pathconf
#define fifo_print fs_netbsd_fifo_print
#define fifo_printinfo fs_netbsd_fifo_printinfo
#define fifo_read fs_netbsd_fifo_read
#define fifo_select fs_netbsd_fifo_select
#define fifo_unlock fs_netbsd_fifo_unlock
#define fifo_vnodeop_entries fs_netbsd_fifo_vnodeop_entries
#define fifo_vnodeop_opv_desc fs_netbsd_fifo_vnodeop_opv_desc
#define fifo_vnodeop_p fs_netbsd_fifo_vnodeop_p
#define fifo_write fs_netbsd_fifo_write
#define filedescopen fs_netbsd_filedescopen
#define finishdup fs_netbsd_finishdup
#define fs_shutdown fs_netbsd_fs_shutdown
#define fscale fs_netbsd_fscale
#define getdevvp fs_netbsd_getdevvp
#define getproc fs_netbsd_getproc
#define getvnode fs_netbsd_getvnode
#define gfilesystem_create fs_netbsd_gfilesystem_create
#define gfilesystem_mount fs_netbsd_gfilesystem_mount
#define gfilesystem_unmount fs_netbsd_gfilesystem_unmount
#define gfile_create fs_netbsd_gfile_create
#define gdir_create fs_netbsd_gdir_create
#define gopen_file_create fs_netbsd_gopen_file_create
#define gopen_dir_create fs_netbsd_gopen_dir_create
#define hz fs_netbsd_hz
#define hzto fs_netbsd_hzto
#define ihash fs_netbsd_ihash
#define ihashtbl fs_netbsd_ihashtbl
#define initproc fs_netbsd_initproc
#define insmntque fs_netbsd_insmntque
#define invalhash fs_netbsd_invalhash
#define ipending fs_netbsd_ipending
#define itimerfix fs_netbsd_itimerfix
#define kernel_object fs_netbsd_kernel_object
#define kinfo_vdebug fs_netbsd_kinfo_vdebug
#define kinfo_vgetfailed fs_netbsd_kinfo_vgetfailed
#define kmem_object fs_netbsd_kmem_object
#define lockcount fs_netbsd_lockcount
#define max_datalen fs_netbsd_max_datalen
#define max_hdr fs_netbsd_max_hdr
#define max_linkhdr fs_netbsd_max_linkhdr
#define max_protohdr fs_netbsd_max_protohdr
#define maxlockdepth fs_netbsd_maxlockdepth
#define maxproc fs_netbsd_maxproc
#define mem_no	fs_netbsd_mem_no
#define mbstat fs_netbsd_mbstat
#define mclfree fs_netbsd_mclfree
#define ncallout fs_netbsd_ncallout
#define nchash fs_netbsd_nchash
#define nchashtbl fs_netbsd_nchashtbl
#define nclruhead fs_netbsd_nclruhead
#define needbuffer fs_netbsd_needbuffer
#define nmbclusters fs_netbsd_nmbclusters
#define nselcoll fs_netbsd_nselcoll
#define nswbuf fs_netbsd_nswbuf
#define nullop fs_netbsd_nullop
#define numcache fs_netbsd_numcache
#define numdquot fs_netbsd_numdquot
#define numvnodes fs_netbsd_numvnodes
#define nvfssw fs_netbsd_nvfssw
#define pageproc fs_netbsd_pageproc
#define pagemove fs_netbsd_pagemove
#define prtactive fs_netbsd_prtactive
#define pv_table fs_netbsd_pv_table
#define qs fs_netbsd_qs
#define rootfs fs_netbsd_rootfs
#define rootdev fs_netbsd_rootdev
#define sb_max fs_netbsd_sb_max
#define selscan fs_netbsd_selscan
#define setrunnable fs_netbsd_setrunnable
#define shutdownhook_list fs_netbsd_shutdownhook_list
#define shutdownhooks_done fs_netbsd_shutdownhooks_done
#define soo_stat fs_netbsd_soo_stat
#define spec_advlock fs_netbsd_spec_advlock
#define spec_badop fs_netbsd_spec_badop
#define spec_bmap fs_netbsd_spec_bmap
#define spec_close fs_netbsd_spec_close
#define spec_ebadf fs_netbsd_spec_ebadf
#define spec_fsync fs_netbsd_spec_fsync
#define spec_ioctl fs_netbsd_spec_ioctl
#define spec_lock fs_netbsd_spec_lock
#define spec_lookup fs_netbsd_spec_lookup
#define spec_open fs_netbsd_spec_open
#define spec_pathconf fs_netbsd_spec_pathconf
#define spec_print fs_netbsd_spec_print
#define spec_read fs_netbsd_spec_read
#define spec_select fs_netbsd_spec_select
#define spec_strategy fs_netbsd_spec_strategy
#define spec_unlock fs_netbsd_spec_unlock
#define spec_vnodeop_entries fs_netbsd_spec_vnodeop_entries
#define spec_write fs_netbsd_spec_write
#define strcat fs_netbsd_strcat
#define strncmp fs_netbsd_strncmp
#define strncpy fs_netbsd_strncpyx
#define suser fs_netbsd_suser
#define swapdev fs_netbsd_swapdev
#define swbuf fs_netbsd_swbuf
#define sys_access fs_netbsd_sys_access
#define sys_chdir fs_netbsd_sys_chdir
#define sys_chflags fs_netbsd_sys_chflags
#define sys_chmod fs_netbsd_sys_chmod
#define sys_chown fs_netbsd_sys_chown
#define sys_chroot fs_netbsd_sys_chroot
#define sys_close fs_netbsd_sys_close
#define sys_dup fs_netbsd_sys_dup
#define sys_dup2 fs_netbsd_sys_dup2
#define sys_fchdir fs_netbsd_sys_fchdir
#define sys_fchflags fs_netbsd_sys_fchflags
#define sys_fchmod fs_netbsd_sys_fchmod
#define sys_fchown fs_netbsd_sys_fchown
#define sys_fcntl fs_netbsd_sys_fcntl
#define sys_flock fs_netbsd_sys_flock
#define sys_fpathconf fs_netbsd_sys_fpathconf
#define sys_fstat fs_netbsd_sys_fstat
#define sys_fstatfs fs_netbsd_sys_fstatfs
#define sys_fsync fs_netbsd_sys_fsync
#define sys_ftruncate fs_netbsd_sys_ftruncate
#define sys_futimes fs_netbsd_sys_futimes
#define sys_getdirentries fs_netbsd_sys_getdirentries
#define sys_getegid fs_netbsd_sys_getegid
#define sys_geteuid fs_netbsd_sys_geteuid
#define sys_getfsstat fs_netbsd_sys_getfsstat
#define sys_getgid fs_netbsd_sys_getgid
#define sys_getgroups fs_netbsd_sys_getgroups
#define sys_getlogin fs_netbsd_sys_getlogin
#define sys_getpgrp fs_netbsd_sys_getpgrp
#define sys_getpid fs_netbsd_sys_getpid
#define sys_getppid fs_netbsd_sys_getppid
#define sys_getuid fs_netbsd_sys_getuid
#define sys_ioctl fs_netbsd_sys_ioctl
#define sys_link fs_netbsd_sys_link
#define sys_lseek fs_netbsd_sys_lseek
#define sys_lstat fs_netbsd_sys_lstat
#define sys_mkdir fs_netbsd_sys_mkdir
#define sys_mkfifo fs_netbsd_sys_mkfifo
#define sys_mknod fs_netbsd_sys_mknod
#define sys_mount fs_netbsd_sys_mount
#define sys_open fs_netbsd_sys_open
#define sys_pathconf fs_netbsd_sys_pathconf
#define sys_quotactl fs_netbsd_sys_quotactl
#define sys_read fs_netbsd_sys_read
#define sys_readlink fs_netbsd_sys_readlink
#define sys_readv fs_netbsd_sys_readv
#define sys_rename fs_netbsd_sys_rename
#define sys_revoke fs_netbsd_sys_revoke
#define sys_rmdir fs_netbsd_sys_rmdir
#define sys_select fs_netbsd_sys_select
#define sys_setegid fs_netbsd_sys_setegid
#define sys_seteuid fs_netbsd_sys_seteuid
#define sys_setgid fs_netbsd_sys_setgid
#define sys_setgroups fs_netbsd_sys_setgroups
#define sys_setlogin fs_netbsd_sys_setlogin
#define sys_setpgid fs_netbsd_sys_setpgid
#define sys_setsid fs_netbsd_sys_setsid
#define sys_setuid fs_netbsd_sys_setuid
#define sys_stat fs_netbsd_sys_stat
#define sys_statfs fs_netbsd_sys_statfs
#define sys_symlink fs_netbsd_sys_symlink
#define sys_sync fs_netbsd_sys_sync
#define sys_truncate fs_netbsd_sys_truncate
#define sys_umask fs_netbsd_sys_umask
#define sys_undelete fs_netbsd_sys_undelete
#define sys_unlink fs_netbsd_sys_unlink
#define sys_unmount fs_netbsd_sys_unmount
#define sys_utimes fs_netbsd_sys_utimes
#define sys_write fs_netbsd_sys_write
#define sys_writev fs_netbsd_sys_writev
#define sysctl_vnode fs_netbsd_sysctl_vnode
#define tick fs_netbsd_tick
#define tickadj fs_netbsd_tickadj
#define total fs_netbsd_total
#define tz fs_netbsd_tz
#define ufs_abortop fs_netbsd_ufs_abortop
#define ufs_access fs_netbsd_ufs_access
#define ufs_advlock fs_netbsd_ufs_advlock
#define ufs_bmap fs_netbsd_ufs_bmap
#define ufs_close fs_netbsd_ufs_close
#define ufs_create fs_netbsd_ufs_create
#define ufs_getattr fs_netbsd_ufs_getattr
#define ufs_inactive fs_netbsd_ufs_inactive
#define ufs_ioctl fs_netbsd_ufs_ioctl
#define ufs_islocked fs_netbsd_ufs_islocked
#define ufs_link fs_netbsd_ufs_link
#define ufs_lock fs_netbsd_ufs_lock
#define ufs_lookup fs_netbsd_ufs_lookup
#define ufs_mkdir fs_netbsd_ufs_mkdir
#define ufs_mknod fs_netbsd_ufs_mknod
#define ufs_mmap fs_netbsd_ufs_mmap
#define ufs_open fs_netbsd_ufs_open
#define ufs_pathconf fs_netbsd_ufs_pathconf
#define ufs_print fs_netbsd_ufs_print
#define ufs_readdir fs_netbsd_ufs_readdir
#define ufs_readlink fs_netbsd_ufs_readlink
#define ufs_remove fs_netbsd_ufs_remove
#define ufs_rename fs_netbsd_ufs_rename
#define ufs_rmdir fs_netbsd_ufs_rmdir
#define ufs_seek fs_netbsd_ufs_seek
#define ufs_select fs_netbsd_ufs_select
#define ufs_setattr fs_netbsd_ufs_setattr
#define ufs_strategy fs_netbsd_ufs_strategy
#define ufs_symlink fs_netbsd_ufs_symlink
#define ufs_unlock fs_netbsd_ufs_unlock
#define ufs_whiteout fs_netbsd_ufs_whiteout
#define ufsfifo_close fs_netbsd_ufsfifo_close
#define ufsfifo_read fs_netbsd_ufsfifo_read
#define ufsfifo_write fs_netbsd_ufsfifo_write
#define ufsspec_close fs_netbsd_ufsspec_close
#define ufsspec_read fs_netbsd_ufsspec_read
#define ufsspec_write fs_netbsd_ufsspec_write
#define unsleep fs_netbsd_unsleep
#define ureadc fs_netbsd_ureadc
#define utsname fs_netbsd_utsname
#define vfs_lock fs_netbsd_vfs_lock
#define vfs_op_descs fs_netbsd_vfs_op_descs
#define vfs_op_init fs_netbsd_vfs_op_init
#define vfs_opv_descs fs_netbsd_vfs_opv_descs
#define vfs_opv_init fs_netbsd_vfs_opv_init
#define vfs_opv_init_default fs_netbsd_vfs_opv_init_default
#define vfs_opv_init_explicit fs_netbsd_vfs_opv_init_explicit
#define vfs_opv_numops fs_netbsd_vfs_opv_numops
#define vfs_shutdown fs_netbsd_vfs_shutdown
#define vfs_unbusy fs_netbsd_vfs_unbusy
#define vfs_unlock fs_netbsd_vfs_unlock
#define vfs_unmountall fs_netbsd_vfs_unmountall
#define vfsinit fs_netbsd_vfsinit
#define vm_cache_lock fs_netbsd_vm_cache_lock
#define vm_object_cached fs_netbsd_vm_object_cached
#define vm_object_cached_list fs_netbsd_vm_object_cached_list
#define vm_object_count fs_netbsd_vm_object_count
#define vm_object_list fs_netbsd_vm_object_list
#define vm_object_list_lock fs_netbsd_vm_object_list_lock
#define vn_select fs_netbsd_vn_select
#define vnode_free_list fs_netbsd_vnode_free_list
#define vnops fs_netbsd_vnops
#define vop_abortop_desc fs_netbsd_vop_abortop_desc
#define vop_abortop_vp_offsets fs_netbsd_vop_abortop_vp_offsets
#define vop_access_desc fs_netbsd_vop_access_desc
#define vop_access_vp_offsets fs_netbsd_vop_access_vp_offsets
#define vop_advlock_desc fs_netbsd_vop_advlock_desc
#define vop_advlock_vp_offsets fs_netbsd_vop_advlock_vp_offsets
#define vop_blkatoff_desc fs_netbsd_vop_blkatoff_desc
#define vop_blkatoff_vp_offsets fs_netbsd_vop_blkatoff_vp_offsets
#define vop_bmap_desc fs_netbsd_vop_bmap_desc
#define vop_bmap_vp_offsets fs_netbsd_vop_bmap_vp_offsets
#define vop_bwrite_desc fs_netbsd_vop_bwrite_desc
#define vop_bwrite_vp_offsets fs_netbsd_vop_bwrite_vp_offsets
#define vop_close_desc fs_netbsd_vop_close_desc
#define vop_close_vp_offsets fs_netbsd_vop_close_vp_offsets
#define vop_create_desc fs_netbsd_vop_create_desc
#define vop_create_vp_offsets fs_netbsd_vop_create_vp_offsets
#define vop_default_desc fs_netbsd_vop_default_desc
#define vop_fsync_desc fs_netbsd_vop_fsync_desc
#define vop_fsync_vp_offsets fs_netbsd_vop_fsync_vp_offsets
#define vop_getattr_desc fs_netbsd_vop_getattr_desc
#define vop_getattr_vp_offsets fs_netbsd_vop_getattr_vp_offsets
#define vop_inactive_desc fs_netbsd_vop_inactive_desc
#define vop_inactive_vp_offsets fs_netbsd_vop_inactive_vp_offsets
#define vop_ioctl_desc fs_netbsd_vop_ioctl_desc
#define vop_ioctl_vp_offsets fs_netbsd_vop_ioctl_vp_offsets
#define vop_islocked_desc fs_netbsd_vop_islocked_desc
#define vop_islocked_vp_offsets fs_netbsd_vop_islocked_vp_offsets
#define vop_lease_desc fs_netbsd_vop_lease_desc
#define vop_lease_vp_offsets fs_netbsd_vop_lease_vp_offsets
#define vop_link_desc fs_netbsd_vop_link_desc
#define vop_link_vp_offsets fs_netbsd_vop_link_vp_offsets
#define vop_lock_desc fs_netbsd_vop_lock_desc
#define vop_lock_vp_offsets fs_netbsd_vop_lock_vp_offsets
#define vop_lookup_desc fs_netbsd_vop_lookup_desc
#define vop_lookup_vp_offsets fs_netbsd_vop_lookup_vp_offsets
#define vop_mkdir_desc fs_netbsd_vop_mkdir_desc
#define vop_mkdir_vp_offsets fs_netbsd_vop_mkdir_vp_offsets
#define vop_mknod_desc fs_netbsd_vop_mknod_desc
#define vop_mknod_vp_offsets fs_netbsd_vop_mknod_vp_offsets
#define vop_mmap_desc fs_netbsd_vop_mmap_desc
#define vop_mmap_vp_offsets fs_netbsd_vop_mmap_vp_offsets
#define vop_open_desc fs_netbsd_vop_open_desc
#define vop_open_vp_offsets fs_netbsd_vop_open_vp_offsets
#define vop_pathconf_desc fs_netbsd_vop_pathconf_desc
#define vop_pathconf_vp_offsets fs_netbsd_vop_pathconf_vp_offsets
#define vop_print_desc fs_netbsd_vop_print_desc
#define vop_print_vp_offsets fs_netbsd_vop_print_vp_offsets
#define vop_read_desc fs_netbsd_vop_read_desc
#define vop_read_vp_offsets fs_netbsd_vop_read_vp_offsets
#define vop_readdir_desc fs_netbsd_vop_readdir_desc
#define vop_readdir_vp_offsets fs_netbsd_vop_readdir_vp_offsets
#define vop_readlink_desc fs_netbsd_vop_readlink_desc
#define vop_readlink_vp_offsets fs_netbsd_vop_readlink_vp_offsets
#define vop_reallocblks_desc fs_netbsd_vop_reallocblks_desc
#define vop_reallocblks_vp_offsets fs_netbsd_vop_reallocblks_vp_offsets
#define vop_reclaim_desc fs_netbsd_vop_reclaim_desc
#define vop_reclaim_vp_offsets fs_netbsd_vop_reclaim_vp_offsets
#define vop_remove_desc fs_netbsd_vop_remove_desc
#define vop_remove_vp_offsets fs_netbsd_vop_remove_vp_offsets
#define vop_rename_desc fs_netbsd_vop_rename_desc
#define vop_rename_vp_offsets fs_netbsd_vop_rename_vp_offsets
#define vop_rmdir_desc fs_netbsd_vop_rmdir_desc
#define vop_rmdir_vp_offsets fs_netbsd_vop_rmdir_vp_offsets
#define vop_seek_desc fs_netbsd_vop_seek_desc
#define vop_seek_vp_offsets fs_netbsd_vop_seek_vp_offsets
#define vop_select_desc fs_netbsd_vop_select_desc
#define vop_select_vp_offsets fs_netbsd_vop_select_vp_offsets
#define vop_setattr_desc fs_netbsd_vop_setattr_desc
#define vop_setattr_vp_offsets fs_netbsd_vop_setattr_vp_offsets
#define vop_strategy_desc fs_netbsd_vop_strategy_desc
#define vop_strategy_vp_offsets fs_netbsd_vop_strategy_vp_offsets
#define vop_symlink_desc fs_netbsd_vop_symlink_desc
#define vop_symlink_vp_offsets fs_netbsd_vop_symlink_vp_offsets
#define vop_truncate_desc fs_netbsd_vop_truncate_desc
#define vop_truncate_vp_offsets fs_netbsd_vop_truncate_vp_offsets
#define vop_unlock_desc fs_netbsd_vop_unlock_desc
#define vop_unlock_vp_offsets fs_netbsd_vop_unlock_vp_offsets
#define vop_update_desc fs_netbsd_vop_update_desc
#define vop_update_vp_offsets fs_netbsd_vop_update_vp_offsets
#define vop_valloc_desc fs_netbsd_vop_valloc_desc
#define vop_valloc_vp_offsets fs_netbsd_vop_valloc_vp_offsets
#define vop_vfree_desc fs_netbsd_vop_vfree_desc
#define vop_vfree_vp_offsets fs_netbsd_vop_vfree_vp_offsets
#define vop_whiteout_desc fs_netbsd_vop_whiteout_desc
#define vop_whiteout_vp_offsets fs_netbsd_vop_whiteout_vp_offsets
#define vop_write_desc fs_netbsd_vop_write_desc
#define vop_write_vp_offsets fs_netbsd_vop_write_vp_offsets
#define want_resched fs_netbsd_want_resched
#define whichqs fs_netbsd_whichqs
#define allocbuf fs_netbsd_allocbuf
#define around fs_netbsd_around
#define bawrite fs_netbsd_bawrite
#define bcmp fs_netbsd_bcmp
#define bcopy fs_netbsd_bcopy
#define bdevsw fs_netbsd_bdevsw
#define bdevvp fs_netbsd_bdevvp
#define bdwrite fs_netbsd_bdwrite
#define bgetvp fs_netbsd_bgetvp
#define biodone fs_netbsd_biodone
#define biowait fs_netbsd_biowait
#define bread fs_netbsd_bread
#define breada fs_netbsd_breada
#define breadn fs_netbsd_breadn
#define brelse fs_netbsd_brelse
#define brelvp fs_netbsd_brelvp
#define bremfree fs_netbsd_bremfree
#define buf	fs_netbsd_buf
#define buffers fs_netbsd_buffers
#define bufinit fs_netbsd_bufinit
#define bufpages fs_netbsd_bufpages
#define bwrite fs_netbsd_bwrite
#define bzero fs_netbsd_bzero
#define cache_enter fs_netbsd_cache_enter
#define cache_lookup fs_netbsd_cache_lookup
#define cache_purge fs_netbsd_cache_purge
#define cache_purgevfs fs_netbsd_cache_purgevfs
#define cdevsw fs_netbsd_cdevsw
#define cdevvp fs_netbsd_cdevvp
#define checkalias fs_netbsd_checkalias
#define chkdq fs_netbsd_chkdq
#define chkdqchg fs_netbsd_chkdqchg
#define chkdquot fs_netbsd_chkdquot
#define chkiq fs_netbsd_chkiq
#define chkiqchg fs_netbsd_chkiqchg
#define chrtoblk fs_netbsd_chrtoblk
#define closef fs_netbsd_closef
#define cluster_callback fs_netbsd_cluster_callback
#define cluster_read fs_netbsd_cluster_read
#define cluster_write fs_netbsd_cluster_write
#define dead_lookup fs_netbsd_dead_lookup
#define dead_open fs_netbsd_dead_open
#define dead_vnodeop_opv_desc fs_netbsd_dead_vnodeop_opv_desc
#define desiredvnodes fs_netbsd_desiredvnodes
#define devcls fs_netbsd_devcls
#define devin fs_netbsd_devin
#define devio fs_netbsd_devio
#define devioc fs_netbsd_devioc
#define devopn fs_netbsd_devopn
#define devout fs_netbsd_devout
#define devwait fs_netbsd_devwait
#define doshutdownhooks fs_netbsd_doshutdownhooks
#define dounmount fs_netbsd_dounmount
#define dqflush fs_netbsd_dqflush
#define dqget fs_netbsd_dqget
#define dqinit fs_netbsd_dqinit
#define dqref fs_netbsd_dqref
#define dqrele fs_netbsd_dqrele
#define dqsync fs_netbsd_dqsync
#define enodev fs_netbsd_enodev
#define falloc fs_netbsd_falloc
#define ffree fs_netbsd_ffree
#define ffs_alloc fs_netbsd_ffs_alloc
#define ffs_balloc fs_netbsd_ffs_balloc
#define ffs_blkatoff fs_netbsd_ffs_blkatoff
#define ffs_blkfree fs_netbsd_ffs_blkfree
#define ffs_blkpref fs_netbsd_ffs_blkpref
#define ffs_cgupdate fs_netbsd_ffs_cgupdate
#define ffs_checkoverlap fs_netbsd_ffs_checkoverlap
#define ffs_clrblock fs_netbsd_ffs_clrblock
#define ffs_clusteracct fs_netbsd_ffs_clusteracct
#define ffs_fhtovp fs_netbsd_ffs_fhtovp
#define ffs_fifoop_opv_desc fs_netbsd_ffs_fifoop_opv_desc
#define ffs_fifoop_p fs_netbsd_ffs_fifoop_p
#define ffs_flushfiles fs_netbsd_ffs_flushfiles
#define ffs_fragacct fs_netbsd_ffs_fragacct
#define ffs_init fs_netbsd_ffs_init
#define ffs_isblock fs_netbsd_ffs_isblock
#define ffs_mount fs_netbsd_ffs_mount
#define ffs_mountfs fs_netbsd_ffs_mountfs
#define ffs_mountroot fs_netbsd_ffs_mountroot
#define ffs_oldfscompat fs_netbsd_ffs_oldfscompat
#define ffs_read fs_netbsd_ffs_read
#define ffs_reallocblks fs_netbsd_ffs_reallocblks
#define ffs_realloccg fs_netbsd_ffs_realloccg
#define ffs_reclaim fs_netbsd_ffs_reclaim
#define ffs_reload fs_netbsd_ffs_reload
#define ffs_sbupdate fs_netbsd_ffs_sbupdate
#define ffs_setblock fs_netbsd_ffs_setblock
#define ffs_specop_opv_desc fs_netbsd_ffs_specop_opv_desc
#define ffs_specop_p fs_netbsd_ffs_specop_p
#define ffs_statfs fs_netbsd_ffs_statfs
#define ffs_sync fs_netbsd_ffs_sync
#define ffs_truncate fs_netbsd_ffs_truncate
#define ffs_unmount fs_netbsd_ffs_unmount
#define ffs_update fs_netbsd_ffs_update
#define ffs_valloc fs_netbsd_ffs_valloc
#define ffs_vfree fs_netbsd_ffs_vfree
#define ffs_vfsops fs_netbsd_ffs_vfsops
#define ffs_vget fs_netbsd_ffs_vget
#define ffs_vnodeop_opv_desc fs_netbsd_ffs_vnodeop_opv_desc
#define ffs_vnodeop_p fs_netbsd_ffs_vnodeop_p
#define ffs_vptofh fs_netbsd_ffs_vptofh
#define ffs_write fs_netbsd_write
#define filehead fs_netbsd_filehead
#define fragtbl fs_netbsd_fragtbl
#define fragtbl124 fs_netbsd_fragtbl124
#define fragtbl8 fs_netbsd_fragtbl8
#define getblk fs_netbsd_getblk
#define geteblk fs_netbsd_geteblk
#define getinoquota fs_netbsd_getinoquota
#define getnewbuf fs_netbsd_getnewbuf
#define getnewfsid fs_netbsd_getnewfsid
#define getnewvnode fs_netbsd_getnewvnode
#define getquota fs_netbsd_getquota
#define getvfs fs_netbsd_getvfs
#define groupmember fs_netbsd_groupmember
#define hashinit fs_netbsd_hashinit
#define hashtab_create fs_netbsd_hashtab_create
#define hashtab_destroy fs_netbsd_hashtab_destroy
#define hashtab_insert fs_netbsd_hashtab_insert
#define hashtab_map fs_netbsd_hashtab_map
#define hashtab_map_remove_on_error fs_netbsd_hashtab_map_remove_on_error
#define hashtab_remove fs_netbsd_hashtab_remove
#define hashtab_search fs_netbsd_hashtab_search
#define holdrele fs_netbsd_holdrele
#define iftovt_tab fs_netbsd_iftovt_tab
#define incore fs_netbsd_incore
#define inside fs_netbsd_inside
#define iskmemdev fs_netbsd_iskmemdev
#define iszerodev fs_netbsd_iszerodev
#define lf_addblock fs_netbsd_lf_addblock
#define lf_advlock fs_netbsd_lf_advlock
#define lf_clearlock fs_netbsd_lf_clearlock
#define lf_findoverlap fs_netbsd_lf_findoverlap
#define lf_getblock fs_netbsd_lf_getblock
#define lf_getlock fs_netbsd_lf_getlock
#define lf_setlock fs_netbsd_lf_setlock
#define lf_split fs_netbsd_lf_split
#define lf_wakelock fs_netbsd_lf_wakelock
#define lfs_fifoop_opv_desc fs_netbsd_lfs_fifoop_opv_desc
#define lfs_specop_opv_desc fs_netbsd_lfs_specop_opv_desc
#define lfs_vnodeop_opv_desc fs_netbsd_lfs_vnodeop_opv_desc
#define lookup fs_netbsd_lookup
#define makefstype fs_netbsd_makefstype
#define maxfiles fs_netbsd_maxfiles
#define mountlist fs_netbsd_mountlist
#define msdosfs_vnodeop_opv_desc fs_netbsd_msdosfs_vnodeop_opv_desc
#define namei fs_netbsd_namei
#define nblkdev fs_netbsd_nblkdev
#define nbuf fs_netbsd_nbuf
#define nchinit fs_netbsd_nchinit
#define nchrdev fs_netbsd_nchrdev
#define nchstats fs_netbsd_nchstats
#define nextgennumber fs_netbsd_nextgennumber
#define nextvnodeid fs_netbsd_nextvnodeid
#define nfiles fs_netbsd_nfiles
#define portal_vnodeop_opv_desc fs_netbsd_portal_vnodeop_opv_desc
#define prfree fs_netbsd_prfree
#define procfs_vnodeop_opv_desc fs_netbsd_procfs_vnodeop_opv_desc
#define qsync fs_netbsd_qsync
#define quotaoff fs_netbsd_quotaoff
#define quotaon fs_netbsd_quotaon
#define reassignbuf  fs_netbsd_reassignbuf
#define relookup fs_netbsd_relookup
#define rootvnode fs_netbsd_rootvnode
#define scanc fs_netbsd_scanc
#define selrecord fs_netbsd_selrecord
#define seltrue fs_netbsd_seltrue
#define selwait fs_netbsd_selwait
#define selwakeup fs_netbsd_selwakeup
#define setquota fs_netbsd_setquota
#define setuse fs_netbsd_setuse
#define shutdownhook_disestablish fs_netbsd_shutdownhook_disestablish
#define shutdownhook_establish fs_netbsd_shutdownhook_establish
#define skpc fs_netbsd_skpc
#define sleep fs_netbsd_sleep
#define spec_nfsv2nodeop_opv_desc fs_netbsd_spec_nfsv2nodeop_opv_desc
#define spec_vnodeop_opv_desc fs_netbsd_spec_vnodeop_opv_desc
#define spec_vnodeop_p fs_netbsd_spec_vnodeop_p
#define speclisth fs_netbsd_speclisth
#define strncasecmp fs_netbsd_strncasecmp
#define ufs_bmaparray fs_netbsd_ufs_bmaparray
#define ufs_check_export fs_netbsd_ufs_check_export
#define ufs_checkpath fs_netbsd_ufs_checkpath
#define ufs_dirbad fs_netbsd_ufs_dirbad
#define ufs_dirbadentry fs_netbsd_ufs_dirbadentry
#define ufs_dirempty fs_netbsd_ufs_dirempty
#define ufs_direnter fs_netbsd_ufs_direnter
#define ufs_direnter2 fs_netbsd_ufs_direnter2
#define ufs_dirremove fs_netbsd_ufs_dirremove
#define ufs_dirrewrite fs_netbsd_ufs_dirrewrite
#define ufs_getlbns fs_netbsd_ufs_getlbns
#define ufs_ihashget fs_netbsd_ufs_ihashget
#define ufs_ihashinit fs_netbsd_ufs_ihashinit
#define ufs_ihashins fs_netbsd_ufs_ihashins
#define ufs_ihashlookup fs_netbsd_ufs_ihashlookup
#define ufs_ihashrem fs_netbsd_ufs_ihashrem
#define ufs_init fs_netbsd_ufs_init
#define ufs_makeinode fs_netbsd_ufs_makeinode
#define ufs_quotactl fs_netbsd_ufs_quotactl
#define ufs_reclaim fs_netbsd_ufs_reclaim
#define ufs_root fs_netbsd_ufs_root
#define ufs_start fs_netbsd_ufs_start
#define ufs_vinit fs_netbsd_ufs_vinit
#define uiomove fs_netbsd_uiomove
#define umap_vnodeop_opv_desc fs_netbsd_umap_vnodeop_opv_desc
#define union_vnodeop_opv_desc fs_netbsd_union_vnodeop_opv_desc
#define va_null fs_netbsd_va_null
#define vaccess fs_netbsd_vaccess
#define vattr_null fs_netbsd_vattr_null
#define vclean fs_netbsd_vclean
#define vcount fs_netbsd_vcount
#define vfinddev fs_netbsd_vfinddev
#define vflush fs_netbsd_vflush
#define vflushbuf fs_netbsd_vflushbuf
#define vfs_bufstats fs_netbsd_vfs_bufstats
#define vfs_busy fs_netbsd_vfs_busy
#define vfs_export fs_netbsd_vfs_export
#define vfs_export_lookup fs_netbsd_vfs_export_lookup
#define vfs_mountedon fs_netbsd_vfs_mountedon
#define vfssw fs_netbsd_vfssw
#define vget fs_netbsd_vget
#define vgone fs_netbsd_vgone
#define vgoneall fs_netbsd_vgoneall
#define vhold fs_netbsd_vhold
#define vinvalbuf fs_netbsd_vinvalbuf
#define vn_bwrite fs_netbsd_vn_bwrite
#define vn_close fs_netbsd_vn_close
#define vn_closefile fs_netbsd_vn_closefile
#define vn_default_error fs_netbsd_vn_default_error
#define vn_ioctl fs_netbsd_vn_ioctl
#define vn_open fs_netbsd_vn_open
#define vn_poll fs_netbsd_vn_poll
#define vn_rdwr fs_netbsd_vn_rdwr
#define vn_read fs_netbsd_vn_read
#define vn_stat fs_netbsd_vn_stat
#define vn_write fs_netbsd_vn_write
#define vn_writechk fs_netbsd_vn_writechk
#define vntblinit fs_netbsd_vntblinit
#define vprint fs_netbsd_vprint
#define vptab fs_netbsd_vptab
#define vput fs_netbsd_vput
#define vref fs_netbsd_vref
#define vrele fs_netbsd_vrele
#define vttoif_tab fs_netbsd_vttoif_tab
#define vwakeup fs_netbsd_vwakeup

/*
 * More global (debugging) symbols defined in the NetBSD fs code.
 */
#define debug0 fs_netbsd_debug0
#define debug1 fs_netbsd_debug1
#define debug11 fs_netbsd_debug11
#define debug12 fs_netbsd_debug12
#define debug13 fs_netbsd_debug13
#define debug14 fs_netbsd_debug14
#define debug15 fs_netbsd_debug15
#define busyprt fs_netbsd_busyprt
#define syncprt fs_netbsd_syncprt
#define prtrealloc fs_netbsd_prtrealloc
#if 0
#define doreallocblks fs_netbsd_doreallocblks
#define doasyncfree fs_netbsd_doasyncfree
#endif
#define doclusterread fs_netbsd_doclusterread
#define doclusterwrite fs_netbsd_doclusterwrite
#define printlockedvnodes fs_netbsd_printlockedvnodes

#endif /* _NETBSD_OSKIT_GLOBAL_H_ */
