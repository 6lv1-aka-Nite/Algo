#include <stdio.h>
#include <stdlib.h>

struct sstack{
    int tab[100];
    int p;
};

typedef struct sstack* stack;

stack new_stack() {
    stack s = malloc(sizeof(struct sstack));
    s->p = 0;
    return s;
}


stack push(stack s, int v) {
    if (s->p < 100) {
        s->tab[s->p] = v;
        s->p += 1;
    }
}


int top(stack s) {
    return s->tab[s->p-1];
}


stack pop(stack s) {
    s->tab[s->p-1] = 0;
    s->p -= 1;
}


stack add(stack s) {
    if (s->p >= 2) {
        int v1 = top(s);
        pop(s);
        int v2 = top(s);
        pop(s);
        push(s, (v1 + v2));
    }
}


stack sub(stack s) {
    if (s->p >= 2) {
        int v1 = top(s);
        pop(s);
        int v2 = top(s);
        pop(s);
        push(s, (v1 - v2));
    }
}


stack mult(stack s) {
    if (s->p >= 2) {
        int v1 = top(s);
        pop(s);
        int v2 = top(s);
        pop(s);
        push(s, (v1 * v2));
    }
}


stack dup(stack s) {
    push(s, top(s));
}


stack swap(stack s) {
    if (s->p >= 2) {
        int v1 = top(s);
        pop(s);
        int v2 = top(s);
        pop(s);
        push(s, v1);
        push(s, v2);
    }
}


void print(stack s) {
    printf("%i\n", top(s));
}


void main() {
    stack s=new_stack();
    push(s, 3);
    dup(s);
    push(s, 1);
    swap(s);
    sub(s);
    mult(s);
    print(s);
    return;
}
