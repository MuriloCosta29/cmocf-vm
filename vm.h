#ifndef VM_H
#define VM_H

#define PAGE_SIZE 256
#define NUM_PAGES 256
#define NUM_FRAMES 128
#define TLB_SIZE 16
#define MAX_ADDRESS 65535

typedef enum { ALG_FIFO, ALG_LRU } Algorithm;

typedef struct {
  const char *address_file;
  Algorithm page_alg;
  Algorithm tlb_alg;
} Config;

#endif
