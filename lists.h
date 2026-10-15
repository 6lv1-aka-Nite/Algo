#ifndef LISTS_H
#define LISTS_H

typedef struct cell {
    int head;
    struct cell* tail;
} * list;

list add(int h, list t);

void print_list(list l);

// SETS //
int has(int v, list l);

list inter(list l1, list l2);

list diff(list l1, list l2);

list rev(list l1);

list cat(list l1, list l2);

list uni(list l1, list l2);

#endif