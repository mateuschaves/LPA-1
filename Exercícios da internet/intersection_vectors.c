#include <stdio.h>
#include <stdlib.h>

    // Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que imprima
    // todos os elementos comuns aos dois vetores.

void main(void){
    int a[5] = {3, 1, 2, 7, 4}, b[8] = {4, 9, 3, 5, 7, 10, 6, 2};

    // 3, 2, 4, 7, 

    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 8; k++){
            if( a[i] == b[k] ){
                printf("%d, ", b[k]);
                break;
            }
        }
    }

    system("pause");
}