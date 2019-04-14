// 2- Escrever um programa que leia um vetor de 10 elementos inteiros e no final
// mostre os valores do vetor que são maiores do que a média dos valores
// digitados.

#include <stdio.h>

int main(void){
    int vetor[10], soma = 0, i;
    float media = 0;

    // Lendo o vetor com as 10 posições
    for(i = 0; i < 10; i++){
        printf("Informe o valor de vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    // calculando a média
    media = (float) soma / (float) i;
    printf("Mostrado valores acima de %.2f\n", media);

    // Percorrendo o vetor de 10 posições
    for(i = 0; i < 10; i++){
        // Se o valor do vetor no índice i for maior que a média
        if( vetor[i] > media){
            // Mostrando o valor
            printf("%d\n", vetor[i]);
        }
    }

}