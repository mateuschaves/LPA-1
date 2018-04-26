#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia 4 notas, mostre as notas e a média natela.

void main(void){
    float notas[4], media = 0;
    int i = 0;
    for(; i < 4; i++){
        printf("Informe a nota %i: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media /= (float) i;
    i = 0;
    for(; i < 4; i++){
        printf("Nota %i = %.2f: \n", i+1, notas[i]);
    }
    printf("Sua media: %.2f: \n", media);
    system("pause");
}