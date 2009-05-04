#include <stdio.h>
#include <string.h>

#include "crc32.h"

/*
void crc32_generate_table() {
   unsigned int crc;
   int i, j;
    
    for (i = 0; i < 256; i++) {
        crc = i;
        for (j = 8; j > 0; j--) {
            if (crc & 1){
                crc = (crc >> 1) ^ 0xedb88320;
            } else {
                crc >>= 1;
            }
        }
        crc_table[i] = crc;
   }
}
*/

void crc32_begin(uint32_t *sum) {
    *sum = 0xffffffff;
}

void crc32_hash(const unsigned char *data, unsigned int len, uint32_t *sum) {
    unsigned int i;
    
    for (i=0; i<len; i++) {
        *sum = (*sum >> 8) ^ crc_table[(*sum ^ data[i]) & 0xff];
    }
}

void crc32_end(uint32_t *sum) {
    *sum = *sum ^ 0xffffffff;
}

unsigned int crc32_hash_string(unsigned char *str) {
    uint32_t crc32;
    
    crc32_begin(&crc32);
    crc32_hash(str, strlen((char*)str), &crc32);
    crc32_end(&crc32);
    
    return crc32;
}

int crc32_hash_file(char *fn, uint32_t *sum) {
    FILE *f;
	const int BUFFER_SIZE=16384;
	unsigned int size;
	unsigned char buffer[16384];
	
	if (!(f = fopen(fn, "r"))) {
		fprintf(stderr, "Error opening file %s\n", fn);
		return -1;
	}
	
	fseek(f, 0, SEEK_END);
	size = ftell(f);
	fseek(f, 0, SEEK_SET);
	
	crc32_begin(sum);
	
	while (size > 0) {
		if (size < BUFFER_SIZE) {
			if (fread(buffer, size, 1, f) != 1) {
                fprintf(stderr, "Error reading file %s\n", fn);
                return -1;
            }
			size = 0;
		} else {
			if (fread(buffer, size, 1, f) != 1) {
                fprintf(stderr, "Error reading file %s\n", fn);
                return -1;
            }
			size-=BUFFER_SIZE;
		}
		crc32_hash(buffer, strlen((char*)buffer), sum);
	}
	
	crc32_end(sum);
    
    return 0;
}

int crc32_test() {
    unsigned int foo;
    crc32_begin(&foo);
    crc32_hash((unsigned char*)"Sample string", 13, &foo);
    crc32_end(&foo);
    
    if (foo == 0xa7579504)
        return 1;
    else
        return 0;
}
