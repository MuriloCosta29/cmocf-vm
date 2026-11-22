#ifndef VM_H
#define VM_H

#define PAGE_SIZE 256
#define NUM_PAGES 256
#ifndef NUM_FRAMES
#define NUM_FRAMES 128
#endif
#define TLB_SIZE 16
#define MAX_ADDRESS 65535
#define BACKING_STORE_FILE "BACKING_STORE.bin"
#define OUTPUT_FILE "correct.txt"

typedef enum { ALG_FIFO, ALG_LRU } Algorithm;

typedef struct {
    const char *address_file;
    Algorithm page_alg;
    Algorithm tlb_alg;
} Config;

#endif
