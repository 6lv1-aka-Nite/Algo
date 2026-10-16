#include <stdio.h>
#include <time.h>

int dp_fibonacci (int n, int dpfib[]){
    if (n <= 1){
        return n;
    }
    else if (dpfib[n] != -1){
        return dpfib[n];
    }
    dpfib[n] = dp_fibonacci(n - 1, dpfib) + dp_fibonacci(n - 2, dpfib);
    return dpfib[n];
}

void main(){
    int n; n= 6;
    int array[] = {-1, -1, -1, -1, -1, -1, -1};
    printf("%i\n", dp_fibonacci(n, array));
    printf("%i\n", clock());
}

/*
CORRECTION
unsigend long long fibonacci_naive(unsigned int n)



*/