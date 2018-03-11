#include <stdio.h>
/*
 *  Crie um programa que exiba a média de pedro, Utilize variável do tipo Float.
 *
 *  Fórmula - média = (Nota 1 + Nota 2 + Nota 3) / 3
 *
 *  Notas = 9.0, 3.0, 5.0
 */
 int main(void) {
    float notas[] = {7.0, 7.5, 7.0};
    float soma, media;
    int i, tamanho;
    tamanho = sizeof(notas)/sizeof(int);
    for(i = 0; i < tamanho; i++){
      soma += notas[i];
    }
    media = soma/tamanho;
    if(media >= 7){
    	printf("Aprovado %f", media);
	}else{
		printf("Reprovado %f", media);
	}
    return 0;
 }
