#include <stdio.h>
/*
 *Crie um programa que exiba a m�dia de pedro, Utilize vari�vel do tipo Float.
 *F�rmula - m�dia = (Nota 1 + Nota 2 + Nota 3) / 3
 */

 int main(void) {

    float notas[] = {9.0, 3.0, 5.0};
    float soma;
    float media;
    int i;

    for(i = 0; i < sizeof(notas)/sizeof(int); i++){
      soma += notas[i];
    }

    int tamanho = sizeof(notas)/sizeof(int);

    media = soma/tamanho;

    printf("M�dia: %f", media);

    return 0;
 }
