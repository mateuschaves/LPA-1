#include <stdio.h>
#include <stdlib.h>

// Fazer um programa em C para calcular a soma dos N primeiros múltiplos de um inteiro K, onde
// N e K são lidos e são números inteiros e positivos.


void main(void){
    int n, k, loop = 0, lastMult = 0, sum = 0;
    scanf("%d %d", &n, &k);

    while( loop != n ){
        sum += lastMult;
        lastMult += k;
        loop++;
    }

    printf("Soma dos %d primeiros multiplos de %d = %d\n", n, k, sum);

    system("pause");
}