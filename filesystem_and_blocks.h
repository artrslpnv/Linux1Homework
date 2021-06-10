//
// Created by Артур Слепнев on 3/11/21.
//

#ifndef FS_FILESYSTEM_AND_BLOCKS_H
#define FS_FILESYSTEM_AND_BLOCKS_H

#define BYTE_SIZE 8
#define SIZE_OF_BLOCK 2048
#define NUMBER_OF_BLOCKS_AND_INODES 4096
#define TOTAL_NUMBER_OF_BYTES SIZE_OF_BLOCK * NUMBER_OF_BLOCKS

#define SIZE_OF_SUPER_BLOCK 1024 - 10 - NUMBER_OF_BLOCKS/BYTE_SIZE
#define blocks_from 514

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>



int create_filesystem(const char *path);

int load_filesystem(const char *path);

int modify_block(const int block_id, void *block, int block_input_length);

int write_block(int *block_id, void *block, int block_input_length);

int read_block(const int block_id, void *block);

int delete_block(const int block_id);

#endif //FS_FILESYSTEM_AND_BLOCKS_H
