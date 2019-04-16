#include <stdio.h>

// 5 - Dados dois vetores, A (5 elementos) e B (8 elementos), faça um programa
// que imprima todos os elementos comuns aos dois vetores.

int main(void){
    int a[5], b[8];

    for(int i = 0; i < 5; i++){
        printf("Informe o valor do vetor a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 8; i++){
        printf("Informe o valor do vetor b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 8; j++){
            if(a[i] == b[j])
                printf("%d ", a[i]);
        }
    }
}