#ifndef STACKS_H
#define STACKS_H

#include <stdlib.h>

struct sstack{
    int tab[100];
    int p;
};

typedef struct sstack* stack;

stack new_stack();
stack push(stack s, int v);
int top(stack s);
stack pop(stack s);
stack add(stack s);
stack sub(stack s);
stack mult(stack s);
stack dup(stack s);
stack swap(stack s);
void print(stack s);

#endif
