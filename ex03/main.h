#include <unistd.h>
#include <stdio.h>

typedef struct node_s {
    void *value;
    struct node_s *next;
} node_t;