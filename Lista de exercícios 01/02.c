#include <stdio.h>
/*
 *   2.	Um professor necessita calcular as notas de seus alunos.
 *   Ele ficou sabendo que você é bom programador e contratou
 *   você para implementar um programa que solicite três notas
 *   e informe a média aritmética delas.
 */

int main(){
    float notas[3] = {0,0,0};
    int i, l;
    char bye;
    float media;
    int tamanho = sizeof(notas)/sizeof(int);
    l = 1;
    for(i = 0; i < tamanho; i++){
        printf("Digite a %i nota: ", l);
        scanf("%f", &notas[i]);
        l++;
    }
    media = (notas[0] + notas[1] + notas[2]) / tamanho;
    printf("Sua media eh : %.2f", media);
    printf("\n Pressione qualquer tecla para sair do programa.");
    scanf("%f", &bye);
}