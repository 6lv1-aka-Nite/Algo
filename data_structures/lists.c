#include <stdio.h>
#include <stdlib.h>

// LISTS //
typedef struct cell {
    int head;
    struct cell* tail;
} * list;

#define empty NULL

list add(int h, list t) {
    list l = malloc(sizeof(struct cell));
    l->head = h; l->tail = t;
    return l;
}

void print_list(list l) {
    list p = l;
    printf("(");
    while (p!=empty) {
        printf("%i", p->head);
        p = p->tail;
        if (p!=empty) printf(" ");
    }
    printf(")");
}

// SETS //
int has(int v, list l) {
    if (l==empty)   return 0;
    if (v==l->head) return 1;
    if (l->tail==empty) return 0;
    return has(v,l->tail);
}

list inter(list l1, list l2) {
    list l = empty;
    list p = l1;
    while (p!=empty) {
        if (has(p->head,l2)) l=add(p->head,l);
        p = p->tail;
    }
    return l;
}

list diff(list l1, list l2) {
    list l = empty;
    list p = l1;
    while (p!=empty) {
        if (!has(p->head,l2)) l=add(p->head,l);
        p = p->tail;
    }
    return l;
}

list rev(list l1) {
    list l = empty;
    list p = l1;
    while (p!=empty) {
        l = add(p->head,l);
        p = p->tail;
    }
    return l;
}

list cat(list l1, list l2) {
    list l = empty;
    list p = l1;
    while (p!=empty) {
        l = add(p->head,l);
        p = p->tail;
    }
    p =l2;
    while (p!=empty) {
        l = add(p->head,l);
        p = p->tail;
    }
    return rev(l);
}

list uni(list l1, list l2) {
    list l = empty;
    list p = l1;
    while (p!=empty) {
        l = add(p->head,l);
        p = p->tail;
    }
    p = l2;
    while (p!=empty) {
        if (!has(p->head,l1)) l = add(p->head,l);
        p = p->tail;
    }
    return l;
}
