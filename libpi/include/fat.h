#ifndef FAT_H
#define FAT_H

/*
 * Partition record and FAT layer. Second level of abstraction.
 * Reads the first FAT32 partition listed in the MBR (no FAT12 or
 * FAT16).
 *
 * Author: Omar Rizwan <osnr@stanford.edu>
 * Date: May 9, 2016
 */

typedef unsigned cluster_t;

void fat_init();

cluster_t fat_root_cluster();

/* Read an arbitrary byte range from a cluster chain (a file or
   directory listing, essentially) in the FAT partition. */
unsigned fat_read(void *buf, cluster_t start_cluster, unsigned offset, unsigned len);

#endif /* FAT_H */
