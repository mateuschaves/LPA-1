#include <stdio.h>

// 2- Escrever um programa que leia um vetor de 10 elementos inteiros
// e no final mostre os valores do vetor que são maiores do que a média dos valores digitados.

int main(void){
    int a[10]; 
    float average = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe o valor de a[%d]: ", i);
        scanf("%d", &a[i]);
        average += a[i];
    }

    average /= 10.00;

    printf("Valores maiores que a media %.2f: \n", average);
    for(int i = 0; i < 10; i++){
        if( a[i] > average )
            printf("%d\n", a[i]);
    }
}