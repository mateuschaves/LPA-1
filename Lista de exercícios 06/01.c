#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Faça um programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.

void main(void){
    setlocale(LC_ALL, "Portuguese");
    int v[10], i=0, n;
    int tamanho = sizeof(v)/sizeof(int);
    while(i < tamanho){
        printf("Informe o valor da posicao v[%i]: ", i);
        scanf("%i", &v[i]);
        i++;
    }
    i--;
    while(i >= 0){
        printf("%i\n", v[i]);
        i--;
    }
    system("pause");
}