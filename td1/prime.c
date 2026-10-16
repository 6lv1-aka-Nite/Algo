#include <stdio.h>

int prime_number(int n){
    int count_pn = 0;
    int nb_div;
    for(int i = 1; i < n; i = i + 1){
        nb_div = 0;
        for(int j = 1; j < i; j = j + 1){
            if(i%j == 0){
                nb_div++;
            }
        }
        if(nb_div == 2){
            count_pn++;
        }
    }
    return count_pn;
}

void main(){
    printf("%i\n", prime_number(17));
}