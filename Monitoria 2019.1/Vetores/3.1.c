#include <stdio.h>

// 3 - Fazer um algoritmo que leia os valores de um vetor inteiro de tamanho 10, e
// imprima o valor da soma dos números ímpares presentes neste vetor.

int main(void){
    int a[10], soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor de a[%d]: ", i);
        scanf("%d", &a[i]);
        if(a[i] % 2 != 0)
            soma += a[i];
    }


    printf("Soma de todos os valores impares: %d", soma);
}