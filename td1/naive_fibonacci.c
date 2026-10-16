#include <stdio.h>
#include <time.h>

int naive_fibonacci(int n){
    if (n == 0 || n == 1){
        return n;
    }
    else{
        return naive_fibonacci(n - 1) + naive_fibonacci(n - 2);
    }
}

void main(){
    int n; n= 6;
    printf("%i\n", naive_fibonacci(n));
    printf("%i\n", clock());
}