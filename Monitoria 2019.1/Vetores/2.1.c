#include <stdio.h>

// 2 - Faça um programa para criar dois vetores de 10 números inteiros, A e B. O
// programa deve preencher o vetor A com valores digitados pelo usuário. O vetor
// B deve ser preenchido da seguinte forma: os elementos de índice par são os
// correspondentes de A divididos por 2 e os elementos de índice ímpar são os
// correspondentes de A multiplicados por 3. Ao final, o programa deverá exibir os
// dois vetores (A e B).

int main(void){
    int a[10], b[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o valor do vetor a[%d]: ", i);
        scanf("%d", &a[i]);
        if(i % 2 == 0){
            b[i] = a[i] / 2;
        }else{
            b[i] = a[i] * 3;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("b[%d] = %d\n", i, b[i]);
    }

}
