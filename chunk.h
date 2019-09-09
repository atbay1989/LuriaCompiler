#ifndef luria_chunk_h
#define luria_chunk_h

#include "common.h" 

typedef enum {
    OP_RETURN,
} Opcode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif