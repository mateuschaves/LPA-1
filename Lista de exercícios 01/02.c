#include <stdio.h>
#include <stdlib.h>
/*
 *   2.	Um professor necessita calcular as notas de seus alunos.
 *   Ele ficou sabendo que você é bom programador e contratou
 *   você para implementar um programa que solicite três notas
 *   e informe a média aritmética delas.
 */

int main(){
    // Declarando as variáveis.
    float notas[3] = {0,0,0};
    int i, l;
    char bye;
    float media;
    // Calculando o tamanho do array notas[]
    int tamanho = sizeof(notas)/sizeof(int);
    l = 1;
    // Loop para preencher as 3 notas
    for(i = 0; i < tamanho; i++){ // Vai executar 3 vezes
        printf("Digite a %i nota: ", l);
        // Lendo a nota do usuário
        scanf("%f", &notas[i]);
        l++;
    }
    // Calculando a média
    media = (notas[0] + notas[1] + notas[2]) / tamanho;
    // Mostrando a média
    printf("Sua media eh : %.2f\n", media);
    system("pause");
}