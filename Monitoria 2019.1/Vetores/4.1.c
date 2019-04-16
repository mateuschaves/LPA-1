#include <stdio.h>

// 4 - Dado dois números inteiros X e Y, preencha um vetor em que é armazenado
// os primeiro X números múltiplos de Y.

int main(void){
    int x, y, m = 0;

    printf("Informe o valor de X: ");
    scanf("%d", &x);

    int vetor[x];

    printf("Informe o valor de Y: ");
    scanf("%d", &y);

    for(int i = 0; i < x; i++){
        m += y;
        vetor[i] = m;
    }

    for(int i = 0; i < x; i++){
        printf("%d\n", vetor[i]);
    }
}