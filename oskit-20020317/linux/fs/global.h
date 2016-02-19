/*
 * Copyright (c) 1997,1998,1999,2000 The University of Utah and the Flux Group.
 * 
 * This file is part of the OSKit Linux Glue Libraries, which are free
 * software, also known as "open source;" you can redistribute them and/or
 * modify them under the terms of the GNU General Public License (GPL),
 * version 2, as published by the Free Software Foundation (FSF).
 * 
 * The OSKit is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GPL for more details.  You should have
 * received a copy of the GPL along with the OSKit; see the file COPYING.  If
 * not, write to the FSF, 59 Temple Place #330, Boston, MA 02111-1307, USA.
 */
/*
 * Global symbol definitions to be included in all Linux fs code.
 * These defines add FS_LINUX_ prefixes to global Linux symbols
 * to ensure namespace cleanliness and prevent linking conflicts.
 * The Linux drivers themselves and the Linux glue code
 * should still continue to use the unprefixed names.
 */
/*
 * This was generated via:
 *

i486-linux-nm liboskit_linux_fs.a | grep ' [TDRC] ' | egrep -vi ' (oskit_|fs_linux|fdev_)' | awk '{ printf "#define "$3" FS_LINUX_"$3"\n" }' | sort > ! ~/oskit/linux/fs/global.h

 *
 * Note that if the .a file is a.out then you will need to remove leading
 * underscores.
 */
#ifndef _LINUX_FS_GLOBAL_H_
#define _LINUX_FS_GLOBAL_H_

#define ROOT_DEV FS_LINUX_ROOT_DEV
#define __bforget FS_LINUX___bforget
#define __brelse FS_LINUX___brelse
#define __const_udelay FS_LINUX___const_udelay
#define __delay FS_LINUX___delay
#define __fput FS_LINUX___fput
#define __mark_inode_dirty FS_LINUX___mark_inode_dirty
#define __namei FS_LINUX___namei
#define __udelay FS_LINUX___udelay
#define __wait_on_super FS_LINUX___wait_on_super
#define _ubh_bread_ FS_LINUX__ubh_bread_
#define _ubh_memcpyubh_ FS_LINUX__ubh_memcpyubh_
#define _ubh_ubhcpymem_ FS_LINUX__ubh_ubhcpymem_
#define affs_add_entry FS_LINUX_affs_add_entry
#define affs_check_name FS_LINUX_affs_check_name
#define affs_checksum_block FS_LINUX_affs_checksum_block
#define affs_copy_name FS_LINUX_affs_copy_name
#define affs_count_free_bits FS_LINUX_affs_count_free_bits
#define affs_count_free_blocks FS_LINUX_affs_count_free_blocks
#define affs_create FS_LINUX_affs_create
#define affs_delete_inode FS_LINUX_affs_delete_inode
#define affs_dentry_operations FS_LINUX_affs_dentry_operations
#define affs_dir_inode_operations FS_LINUX_affs_dir_inode_operations
#define affs_error FS_LINUX_affs_error
#define affs_file_inode_operations FS_LINUX_affs_file_inode_operations
#define affs_file_inode_operations_ofs FS_LINUX_affs_file_inode_operations_ofs
#define affs_fix_checksum FS_LINUX_affs_fix_checksum
#define affs_free_block FS_LINUX_affs_free_block
#define affs_free_prealloc FS_LINUX_affs_free_prealloc
#define affs_get_file_name FS_LINUX_affs_get_file_name
#define affs_hash_name FS_LINUX_affs_hash_name
#define affs_insert_hash FS_LINUX_affs_insert_hash
#define affs_link FS_LINUX_affs_link
#define affs_lookup FS_LINUX_affs_lookup
#define affs_make_zones FS_LINUX_affs_make_zones
#define affs_mkdir FS_LINUX_affs_mkdir
#define affs_new_data FS_LINUX_affs_new_data
#define affs_new_header FS_LINUX_affs_new_header
#define affs_new_inode FS_LINUX_affs_new_inode
#define affs_notify_change FS_LINUX_affs_notify_change
#define affs_parent_ino FS_LINUX_affs_parent_ino
#define affs_put_inode FS_LINUX_affs_put_inode
#define affs_read_inode FS_LINUX_affs_read_inode
#define affs_remove_hash FS_LINUX_affs_remove_hash
#define affs_remove_header FS_LINUX_affs_remove_header
#define affs_remove_link FS_LINUX_affs_remove_link
#define affs_rename FS_LINUX_affs_rename
#define affs_rmdir FS_LINUX_affs_rmdir
#define affs_symlink FS_LINUX_affs_symlink
#define affs_symlink_inode_operations FS_LINUX_affs_symlink_inode_operations
#define affs_truncate FS_LINUX_affs_truncate
#define affs_unlink FS_LINUX_affs_unlink
#define affs_warning FS_LINUX_affs_warning
#define affs_write_inode FS_LINUX_affs_write_inode
#define bad_inode_ops FS_LINUX_bad_inode_ops
#define bdevname FS_LINUX_bdevname
#define bdf_prm FS_LINUX_bdf_prm
#define bdflush_max FS_LINUX_bdflush_max
#define bdflush_min FS_LINUX_bdflush_min
#define blk_size FS_LINUX_blk_size
#define blkdev_inode_operations FS_LINUX_blkdev_inode_operations
#define blkdev_open FS_LINUX_blkdev_open
#define blksize_size FS_LINUX_blksize_size
#define bmap FS_LINUX_bmap
#define bread FS_LINUX_bread
#define breada FS_LINUX_breada
#define buffer_init FS_LINUX_buffer_init
#define buffermem FS_LINUX_buffermem
#define charset2uni FS_LINUX_charset2uni
#define chrdev_inode_operations FS_LINUX_chrdev_inode_operations
#define clean_inode FS_LINUX_clean_inode
#define clear_inode FS_LINUX_clear_inode
#define cvf_format_use_count FS_LINUX_cvf_format_use_count
#define cvf_formats FS_LINUX_cvf_formats
#define d_alloc FS_LINUX_d_alloc
#define d_alloc_root FS_LINUX_d_alloc_root
#define d_delete FS_LINUX_d_delete
#define d_instantiate FS_LINUX_d_instantiate
#define d_invalidate FS_LINUX_d_invalidate
#define d_lookup FS_LINUX_d_lookup
#define d_move FS_LINUX_d_move
#define d_path FS_LINUX_d_path
#define d_rehash FS_LINUX_d_rehash
#define d_umount FS_LINUX_d_umount
#define d_validate FS_LINUX_d_validate
#define date_dos2unix FS_LINUX_date_dos2unix
#define dcache_init FS_LINUX_dcache_init
#define dec_cvf_format_use_count_by_version FS_LINUX_dec_cvf_format_use_count_by_version
#define dec_use_count FS_LINUX_dec_use_count
#define dentry_cache FS_LINUX_dentry_cache
#define dentry_stat FS_LINUX_dentry_stat
#define detect_cvf FS_LINUX_detect_cvf
#define do_link FS_LINUX_do_link
#define do_mkdir FS_LINUX_do_mkdir
#define do_mknod FS_LINUX_do_mknod
#define do_rename FS_LINUX_do_rename
#define do_rmdir FS_LINUX_do_rmdir
#define do_symlink FS_LINUX_do_symlink
#define do_truncate FS_LINUX_do_truncate
#define do_unlink FS_LINUX_do_unlink
#define dput FS_LINUX_dput
#define event FS_LINUX_event
#define ext2_bmap FS_LINUX_ext2_bmap
#define ext2_bread FS_LINUX_ext2_bread
#define ext2_check_blocks_bitmap FS_LINUX_ext2_check_blocks_bitmap
#define ext2_check_dir_entry FS_LINUX_ext2_check_dir_entry
#define ext2_check_inodes_bitmap FS_LINUX_ext2_check_inodes_bitmap
#define ext2_count_free FS_LINUX_ext2_count_free
#define ext2_count_free_blocks FS_LINUX_ext2_count_free_blocks
#define ext2_count_free_inodes FS_LINUX_ext2_count_free_inodes
#define ext2_create FS_LINUX_ext2_create
#define ext2_delete_inode FS_LINUX_ext2_delete_inode
#define ext2_dir_inode_operations FS_LINUX_ext2_dir_inode_operations
#define ext2_discard_prealloc FS_LINUX_ext2_discard_prealloc
#define ext2_error FS_LINUX_ext2_error
#define ext2_file_inode_operations FS_LINUX_ext2_file_inode_operations
#define ext2_free_blocks FS_LINUX_ext2_free_blocks
#define ext2_free_inode FS_LINUX_ext2_free_inode
#define ext2_get_group_desc FS_LINUX_ext2_get_group_desc
#define ext2_getblk FS_LINUX_ext2_getblk
#define ext2_group_sparse FS_LINUX_ext2_group_sparse
#define ext2_ioctl FS_LINUX_ext2_ioctl
#define ext2_link FS_LINUX_ext2_link
#define ext2_lookup FS_LINUX_ext2_lookup
#define ext2_mkdir FS_LINUX_ext2_mkdir
#define ext2_mknod FS_LINUX_ext2_mknod
#define ext2_new_block FS_LINUX_ext2_new_block
#define ext2_new_inode FS_LINUX_ext2_new_inode
#define ext2_notify_change FS_LINUX_ext2_notify_change
#define ext2_panic FS_LINUX_ext2_panic
#define ext2_permission FS_LINUX_ext2_permission
#define ext2_put_inode FS_LINUX_ext2_put_inode
#define ext2_put_super FS_LINUX_ext2_put_super
#define ext2_read_inode FS_LINUX_ext2_read_inode
#define ext2_read_super FS_LINUX_ext2_read_super
#define ext2_remount FS_LINUX_ext2_remount
#define ext2_rename FS_LINUX_ext2_rename
#define ext2_rmdir FS_LINUX_ext2_rmdir
#define ext2_statfs FS_LINUX_ext2_statfs
#define ext2_symlink FS_LINUX_ext2_symlink
#define ext2_symlink_inode_operations FS_LINUX_ext2_symlink_inode_operations
#define ext2_sync_file FS_LINUX_ext2_sync_file
#define ext2_sync_inode FS_LINUX_ext2_sync_inode
#define ext2_truncate FS_LINUX_ext2_truncate
#define ext2_unlink FS_LINUX_ext2_unlink
#define ext2_warning FS_LINUX_ext2_warning
#define ext2_write_inode FS_LINUX_ext2_write_inode
#define ext2_write_super FS_LINUX_ext2_write_super
#define fat__get_entry FS_LINUX_fat__get_entry
#define fat_access FS_LINUX_fat_access
#define fat_add_cluster FS_LINUX_fat_add_cluster
#define fat_add_cluster1 FS_LINUX_fat_add_cluster1
#define fat_add_entries FS_LINUX_fat_add_entries
#define fat_attach FS_LINUX_fat_attach
#define fat_bmap FS_LINUX_fat_bmap
#define fat_bread FS_LINUX_fat_bread
#define fat_brelse FS_LINUX_fat_brelse
#define fat_build_inode FS_LINUX_fat_build_inode
#define fat_cache_add FS_LINUX_fat_cache_add
#define fat_cache_init FS_LINUX_fat_cache_init
#define fat_cache_inval_dev FS_LINUX_fat_cache_inval_dev
#define fat_cache_inval_inode FS_LINUX_fat_cache_inval_inode
#define fat_cache_lookup FS_LINUX_fat_cache_lookup
#define fat_clear_inode FS_LINUX_fat_clear_inode
#define fat_clusters_flush FS_LINUX_fat_clusters_flush
#define fat_date_unix2dos FS_LINUX_fat_date_unix2dos
#define fat_delete_inode FS_LINUX_fat_delete_inode
#define fat_detach FS_LINUX_fat_detach
#define fat_dir_empty FS_LINUX_fat_dir_empty
#define fat_dir_ioctl FS_LINUX_fat_dir_ioctl
#define fat_dir_operations FS_LINUX_fat_dir_operations
#define fat_esc2uni FS_LINUX_fat_esc2uni
#define fat_file_inode_operations FS_LINUX_fat_file_inode_operations
#define fat_file_inode_operations_1024 FS_LINUX_fat_file_inode_operations_1024
#define fat_file_inode_operations_readpage FS_LINUX_fat_file_inode_operations_readpage
#define fat_file_read FS_LINUX_fat_file_read
#define fat_file_write FS_LINUX_fat_file_write
#define fat_free FS_LINUX_fat_free
#define fat_fs_panic FS_LINUX_fat_fs_panic
#define fat_get_cluster FS_LINUX_fat_get_cluster
#define fat_getblk FS_LINUX_fat_getblk
#define fat_hash_init FS_LINUX_fat_hash_init
#define fat_iget FS_LINUX_fat_iget
#define fat_inode_lock FS_LINUX_fat_inode_lock
#define fat_is_binary FS_LINUX_fat_is_binary
#define fat_is_uptodate FS_LINUX_fat_is_uptodate
#define fat_ll_rw_block FS_LINUX_fat_ll_rw_block
#define fat_lock_creation FS_LINUX_fat_lock_creation
#define fat_mark_buffer_dirty FS_LINUX_fat_mark_buffer_dirty
#define fat_mmap FS_LINUX_fat_mmap
#define fat_notify_change FS_LINUX_fat_notify_change
#define fat_parent_ino FS_LINUX_fat_parent_ino
#define fat_put_super FS_LINUX_fat_put_super
#define fat_read_super FS_LINUX_fat_read_super
#define fat_readdir FS_LINUX_fat_readdir
#define fat_readpage FS_LINUX_fat_readpage
#define fat_scan FS_LINUX_fat_scan
#define fat_search_long FS_LINUX_fat_search_long
#define fat_set_uptodate FS_LINUX_fat_set_uptodate
#define fat_smap FS_LINUX_fat_smap
#define fat_statfs FS_LINUX_fat_statfs
#define fat_subdirs FS_LINUX_fat_subdirs
#define fat_truncate FS_LINUX_fat_truncate
#define fat_uni2esc FS_LINUX_fat_uni2esc
#define fat_unlock_creation FS_LINUX_fat_unlock_creation
#define fat_write_inode FS_LINUX_fat_write_inode
#define file_fsync FS_LINUX_file_fsync
#define find_buffer FS_LINUX_find_buffer
#define find_inode_number FS_LINUX_find_inode_number
#define find_nls FS_LINUX_find_nls
#define find_rock_ridge_relocation FS_LINUX_find_rock_ridge_relocation
#define fput FS_LINUX_fput
#define free_inode_memory FS_LINUX_free_inode_memory
#define fsync_dev FS_LINUX_fsync_dev
#define generic_file_read FS_LINUX_generic_file_read
#define generic_readpage FS_LINUX_generic_readpage
#define get_acorn_filename FS_LINUX_get_acorn_filename
#define get_empty_inode FS_LINUX_get_empty_inode
#define get_fs_type FS_LINUX_get_fs_type
#define get_hardblocksize FS_LINUX_get_hardblocksize
#define get_hash_table FS_LINUX_get_hash_table
#define get_joliet_filename FS_LINUX_get_joliet_filename
#define get_rock_ridge_filename FS_LINUX_get_rock_ridge_filename
#define get_rock_ridge_symlink FS_LINUX_get_rock_ridge_symlink
#define get_super FS_LINUX_get_super
#define get_write_access FS_LINUX_get_write_access
#define getblk FS_LINUX_getblk
#define getname FS_LINUX_getname
#define gfile_create FS_LINUX_gfile_create
#define gopenfile_create FS_LINUX_gopenfile_create
#define hardsect_size FS_LINUX_hardsect_size
#define hpfs_char_to_linux FS_LINUX_hpfs_char_to_linux
#define hpfs_char_to_lower_linux FS_LINUX_hpfs_char_to_lower_linux
#define hpfs_char_to_upper_linux FS_LINUX_hpfs_char_to_upper_linux
#define hpfs_read_super FS_LINUX_hpfs_read_super
#define iget FS_LINUX_iget
#define igrab FS_LINUX_igrab
#define in_group_p FS_LINUX_in_group_p
#define inc_use_count FS_LINUX_inc_use_count
#define init_affs_fs FS_LINUX_init_affs_fs
#define init_buffer FS_LINUX_init_buffer
#define init_ext2_fs FS_LINUX_init_ext2_fs
#define init_fat_fs FS_LINUX_init_fat_fs
#define init_hpfs_fs FS_LINUX_init_hpfs_fs
#define init_iso9660_fs FS_LINUX_init_iso9660_fs
#define init_minix_fs FS_LINUX_init_minix_fs
#define init_msdos_fs FS_LINUX_init_msdos_fs
#define init_nls FS_LINUX_init_nls
#define init_sysv_fs FS_LINUX_init_sysv_fs
#define init_ufs_fs FS_LINUX_init_ufs_fs
#define init_vfat_fs FS_LINUX_init_vfat_fs
#define inode_change_ok FS_LINUX_inode_change_ok
#define inode_in_use FS_LINUX_inode_in_use
#define inode_init FS_LINUX_inode_init
#define inode_lock FS_LINUX_inode_lock
#define inode_setattr FS_LINUX_inode_setattr
#define inodes_stat FS_LINUX_inodes_stat
#define insert_inode_hash FS_LINUX_insert_inode_hash
#define invalidate_buffers FS_LINUX_invalidate_buffers
#define invalidate_inodes FS_LINUX_invalidate_inodes
#define iput FS_LINUX_iput
#define is_bad_inode FS_LINUX_is_bad_inode
#define is_root_busy FS_LINUX_is_root_busy
#define is_subdir FS_LINUX_is_subdir
#define iso_date FS_LINUX_iso_date
#define isofs_bmap FS_LINUX_isofs_bmap
#define isofs_dir_inode_operations FS_LINUX_isofs_dir_inode_operations
#define isofs_file_inode_operations FS_LINUX_isofs_file_inode_operations
#define isofs_lookup FS_LINUX_isofs_lookup
#define isofs_lookup_grandparent FS_LINUX_isofs_lookup_grandparent
#define isofs_put_super FS_LINUX_isofs_put_super
#define isofs_read_inode FS_LINUX_isofs_read_inode
#define isofs_read_super FS_LINUX_isofs_read_super
#define isofs_statfs FS_LINUX_isofs_statfs
#define isofs_symlink_inode_operations FS_LINUX_isofs_symlink_inode_operations
#define isonum_711 FS_LINUX_isonum_711
#define isonum_712 FS_LINUX_isonum_712
#define isonum_721 FS_LINUX_isonum_721
#define isonum_722 FS_LINUX_isonum_722
#define isonum_723 FS_LINUX_isonum_723
#define isonum_731 FS_LINUX_isonum_731
#define isonum_732 FS_LINUX_isonum_732
#define isonum_733 FS_LINUX_isonum_733
#define iunique FS_LINUX_iunique
#define linux_char_to_upper_linux FS_LINUX_linux_char_to_upper_linux
#define linux_errno_to_oskit_error FS_LINUX_linux_errno_to_oskit_error
#define ll_rw_block FS_LINUX_ll_rw_block
#define load_nls FS_LINUX_load_nls
#define load_nls_default FS_LINUX_load_nls_default
#define lock_fat FS_LINUX_lock_fat
#define lookup_dentry FS_LINUX_lookup_dentry
#define make_bad_inode FS_LINUX_make_bad_inode
#define mark_buffer_uptodate FS_LINUX_mark_buffer_uptodate
#define max_dquots FS_LINUX_max_dquots
#define max_inodes FS_LINUX_max_inodes
#define max_super_blocks FS_LINUX_max_super_blocks
#define mem_map FS_LINUX_mem_map
#define memscan FS_LINUX_memscan
#define memzero bzero
#define min_free_pages FS_LINUX_min_free_pages
#define minix_bmap FS_LINUX_minix_bmap
#define minix_bread FS_LINUX_minix_bread
#define minix_count_free_blocks FS_LINUX_minix_count_free_blocks
#define minix_count_free_inodes FS_LINUX_minix_count_free_inodes
#define minix_create FS_LINUX_minix_create
#define minix_dentry_operations FS_LINUX_minix_dentry_operations
#define minix_dir_inode_operations FS_LINUX_minix_dir_inode_operations
#define minix_file_inode_operations FS_LINUX_minix_file_inode_operations
#define minix_free_block FS_LINUX_minix_free_block
#define minix_free_inode FS_LINUX_minix_free_inode
#define minix_getblk FS_LINUX_minix_getblk
#define minix_link FS_LINUX_minix_link
#define minix_lookup FS_LINUX_minix_lookup
#define minix_mkdir FS_LINUX_minix_mkdir
#define minix_mknod FS_LINUX_minix_mknod
#define minix_new_block FS_LINUX_minix_new_block
#define minix_new_inode FS_LINUX_minix_new_inode
#define minix_rename FS_LINUX_minix_rename
#define minix_rmdir FS_LINUX_minix_rmdir
#define minix_symlink FS_LINUX_minix_symlink
#define minix_symlink_inode_operations FS_LINUX_minix_symlink_inode_operations
#define minix_sync_file FS_LINUX_minix_sync_file
#define minix_sync_inode FS_LINUX_minix_sync_inode
#define minix_truncate FS_LINUX_minix_truncate
#define minix_unlink FS_LINUX_minix_unlink
#define mode_to_prot FS_LINUX_mode_to_prot
#define mount_root FS_LINUX_mount_root
#define msdos_create FS_LINUX_msdos_create
#define msdos_dir_inode_operations FS_LINUX_msdos_dir_inode_operations
#define msdos_fs_type FS_LINUX_msdos_fs_type
#define msdos_lookup FS_LINUX_msdos_lookup
#define msdos_mkdir FS_LINUX_msdos_mkdir
#define msdos_put_super FS_LINUX_msdos_put_super
#define msdos_read_super FS_LINUX_msdos_read_super
#define msdos_rename FS_LINUX_msdos_rename
#define msdos_rmdir FS_LINUX_msdos_rmdir
#define msdos_unlink FS_LINUX_msdos_unlink
#define notify_change FS_LINUX_notify_change
#define nr_dquots FS_LINUX_nr_dquots
#define nr_free_dquots FS_LINUX_nr_free_dquots
#define nr_free_pages FS_LINUX_nr_free_pages
#define nr_super_blocks FS_LINUX_nr_super_blocks
#define open_namei FS_LINUX_open_namei
#define parse_rock_ridge_inode FS_LINUX_parse_rock_ridge_inode
#define permission FS_LINUX_permission
#define prot_to_mode FS_LINUX_prot_to_mode
#define prune_dcache FS_LINUX_prune_dcache
#define put_write_access FS_LINUX_put_write_access
#define read_ahead FS_LINUX_read_ahead
#define refile_buffer FS_LINUX_refile_buffer
#define register_cvf_format FS_LINUX_register_cvf_format
#define register_filesystem FS_LINUX_register_filesystem
#define register_nls FS_LINUX_register_nls
#define remove_inode_hash FS_LINUX_remove_inode_hash
#define secs_to_datestamp FS_LINUX_secs_to_datestamp
#define securelevel FS_LINUX_securelevel
#define select_dcache FS_LINUX_select_dcache
#define send_sig FS_LINUX_send_sig
#define set_blocksize FS_LINUX_set_blocksize
#define set_writetime FS_LINUX_set_writetime
#define show_buffers FS_LINUX_show_buffers
#define shrink_dcache_memory FS_LINUX_shrink_dcache_memory
#define shrink_dcache_parent FS_LINUX_shrink_dcache_parent
#define shrink_dcache_sb FS_LINUX_shrink_dcache_sb
#define strnicmp FS_LINUX_strnicmp
#define strnlen FS_LINUX_strnlen
#define super_blocks FS_LINUX_super_blocks
#define sync_dev FS_LINUX_sync_dev
#define sync_inodes FS_LINUX_sync_inodes
#define sync_supers FS_LINUX_sync_supers
#define sys_getcwd FS_LINUX_sys_getcwd
#define sys_mkdir FS_LINUX_sys_mkdir
#define sys_mknod FS_LINUX_sys_mknod
#define sys_quotactl FS_LINUX_sys_quotactl
#define sys_rename FS_LINUX_sys_rename
#define sys_rmdir FS_LINUX_sys_rmdir
#define sys_symlink FS_LINUX_sys_symlink
#define sys_sync FS_LINUX_sys_sync
#define sys_tz FS_LINUX_sys_tz
#define sys_unlink FS_LINUX_sys_unlink
#define sysv_bmap FS_LINUX_sysv_bmap
#define sysv_count_free_blocks FS_LINUX_sysv_count_free_blocks
#define sysv_count_free_inodes FS_LINUX_sysv_count_free_inodes
#define sysv_create FS_LINUX_sysv_create
#define sysv_dir_inode_operations FS_LINUX_sysv_dir_inode_operations
#define sysv_file_bread FS_LINUX_sysv_file_bread
#define sysv_file_inode_operations FS_LINUX_sysv_file_inode_operations
#define sysv_file_read FS_LINUX_sysv_file_read
#define sysv_free_block FS_LINUX_sysv_free_block
#define sysv_free_inode FS_LINUX_sysv_free_inode
#define sysv_getblk FS_LINUX_sysv_getblk
#define sysv_link FS_LINUX_sysv_link
#define sysv_lookup FS_LINUX_sysv_lookup
#define sysv_mkdir FS_LINUX_sysv_mkdir
#define sysv_mknod FS_LINUX_sysv_mknod
#define sysv_new_block FS_LINUX_sysv_new_block
#define sysv_new_inode FS_LINUX_sysv_new_inode
#define sysv_notify_change FS_LINUX_sysv_notify_change
#define sysv_put_super FS_LINUX_sysv_put_super
#define sysv_read_inode FS_LINUX_sysv_read_inode
#define sysv_read_super FS_LINUX_sysv_read_super
#define sysv_rename FS_LINUX_sysv_rename
#define sysv_rmdir FS_LINUX_sysv_rmdir
#define sysv_statfs FS_LINUX_sysv_statfs
#define sysv_symlink FS_LINUX_sysv_symlink
#define sysv_symlink_inode_operations FS_LINUX_sysv_symlink_inode_operations
#define sysv_sync_file FS_LINUX_sysv_sync_file
#define sysv_sync_inode FS_LINUX_sysv_sync_inode
#define sysv_truncate FS_LINUX_sysv_truncate
#define sysv_unlink FS_LINUX_sysv_unlink
#define sysv_write_inode FS_LINUX_sysv_write_inode
#define sysv_write_super FS_LINUX_sysv_write_super
#define tq_disk FS_LINUX_tq_disk
#define ubh_bforget FS_LINUX_ubh_bforget
#define ubh_bread_uspi FS_LINUX_ubh_bread_uspi
#define ubh_brelse FS_LINUX_ubh_brelse
#define ubh_brelse_uspi FS_LINUX_ubh_brelse_uspi
#define ubh_buffer_dirty FS_LINUX_ubh_buffer_dirty
#define ubh_ll_rw_block FS_LINUX_ubh_ll_rw_block
#define ubh_mark_buffer_dirty FS_LINUX_ubh_mark_buffer_dirty
#define ubh_mark_buffer_uptodate FS_LINUX_ubh_mark_buffer_uptodate
#define ubh_max_bcount FS_LINUX_ubh_max_bcount
#define ubh_wait_on_buffer FS_LINUX_ubh_wait_on_buffer
#define ufs_add_fragments FS_LINUX_ufs_add_fragments
#define ufs_alloc_fragments FS_LINUX_ufs_alloc_fragments
#define ufs_alloccg_block FS_LINUX_ufs_alloccg_block
#define ufs_bitmap_search FS_LINUX_ufs_bitmap_search
#define ufs_bmap FS_LINUX_ufs_bmap
#define ufs_bread FS_LINUX_ufs_bread
#define ufs_check_dir_entry FS_LINUX_ufs_check_dir_entry
#define ufs_clusteracct FS_LINUX_ufs_clusteracct
#define ufs_create FS_LINUX_ufs_create
#define ufs_delete_inode FS_LINUX_ufs_delete_inode
#define ufs_dir_inode_operations FS_LINUX_ufs_dir_inode_operations
#define ufs_error FS_LINUX_ufs_error
#define ufs_file_inode_operations FS_LINUX_ufs_file_inode_operations
#define ufs_free_blocks FS_LINUX_ufs_free_blocks
#define ufs_free_fragments FS_LINUX_ufs_free_fragments
#define ufs_free_inode FS_LINUX_ufs_free_inode
#define ufs_getfrag FS_LINUX_ufs_getfrag
#define ufs_link FS_LINUX_ufs_link
#define ufs_load_cylinder FS_LINUX_ufs_load_cylinder
#define ufs_lookup FS_LINUX_ufs_lookup
#define ufs_mkdir FS_LINUX_ufs_mkdir
#define ufs_mknod FS_LINUX_ufs_mknod
#define ufs_new_fragments FS_LINUX_ufs_new_fragments
#define ufs_new_inode FS_LINUX_ufs_new_inode
#define ufs_panic FS_LINUX_ufs_panic
#define ufs_permission FS_LINUX_ufs_permission
#define ufs_put_cylinder FS_LINUX_ufs_put_cylinder
#define ufs_put_cylinder_structures FS_LINUX_ufs_put_cylinder_structures
#define ufs_put_inode FS_LINUX_ufs_put_inode
#define ufs_put_super FS_LINUX_ufs_put_super
#define ufs_read_cylinder_structures FS_LINUX_ufs_read_cylinder_structures
#define ufs_read_inode FS_LINUX_ufs_read_inode
#define ufs_read_super FS_LINUX_ufs_read_super
#define ufs_remount FS_LINUX_ufs_remount
#define ufs_rename FS_LINUX_ufs_rename
#define ufs_rmdir FS_LINUX_ufs_rmdir
#define ufs_statfs FS_LINUX_ufs_statfs
#define ufs_symlink FS_LINUX_ufs_symlink
#define ufs_symlink_inode_operations FS_LINUX_ufs_symlink_inode_operations
#define ufs_sync_inode FS_LINUX_ufs_sync_inode
#define ufs_truncate FS_LINUX_ufs_truncate
#define ufs_unlink FS_LINUX_ufs_unlink
#define ufs_warning FS_LINUX_ufs_warning
#define ufs_write_inode FS_LINUX_ufs_write_inode
#define ufs_write_super FS_LINUX_ufs_write_super
#define unload_nls FS_LINUX_unload_nls
#define unlock_fat FS_LINUX_unlock_fat
#define unregister_cvf_format FS_LINUX_unregister_cvf_format
#define unregister_nls FS_LINUX_unregister_nls
#define update_atime FS_LINUX_update_atime
#define utf8_mbstowcs FS_LINUX_utf8_mbstowcs
#define utf8_mbtowc FS_LINUX_utf8_mbtowc
#define utf8_wcstombs FS_LINUX_utf8_wcstombs
#define utf8_wctomb FS_LINUX_utf8_wctomb
#define vfat_create FS_LINUX_vfat_create
#define vfat_dir_inode_operations FS_LINUX_vfat_dir_inode_operations
#define vfat_fs_type FS_LINUX_vfat_fs_type
#define vfat_lookup FS_LINUX_vfat_lookup
#define vfat_mkdir FS_LINUX_vfat_mkdir
#define vfat_read_super FS_LINUX_vfat_read_super
#define vfat_rename FS_LINUX_vfat_rename
#define vfat_rmdir FS_LINUX_vfat_rmdir
#define vfat_unlink FS_LINUX_vfat_unlink
#define vfs_rename FS_LINUX_vfs_rename
#define vfs_rename_dir FS_LINUX_vfs_rename_dir
#define vfs_rename_other FS_LINUX_vfs_rename_other
#define vfs_rmdir FS_LINUX_vfs_rmdir
#define vfs_unlink FS_LINUX_vfs_unlink
#define wakeup_bdflush FS_LINUX_wakeup_bdflush
#define write_inode_now FS_LINUX_write_inode_now
#define floppy_eject FDEV_LINUX_floppy_eject

#endif /* _LINUX_FS_GLOBAL_H_ */
