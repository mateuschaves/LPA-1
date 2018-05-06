#include <stdio.h>
#include <stdlib.h>

/*
    3.  Digite “n” números em vetor e exiba quais
        números foram digitados e quantos foram
        digitados. Qual o elemento da terceira posição e
        da última posição.
*/

void main(void){
    // Guarda a quatidade de elementos do vetor;
    int quantidade, i = 0;
    printf("Informe a quantidade de elementos do vetor: ");
    // Lendo a quantidade de elementos do vetor que o usuario digitou;
    scanf("%i", &quantidade);
    // Criando o vetor com a quantidade de elementos informada;
    int vetor[quantidade];
    // Loop para preencher o vetor;
    for(; i < quantidade; i++){
        printf("Informe o valor de vetor[%i]: ", i);
        // Lendo o valor do teclado do usuário e atribuindo ao vetor na posição i ;
        scanf("%i", &vetor[i]);
    }
    // Loop para mostrar o vetor;
    for(i = 0; i < quantidade; i++){
        printf("vetor[%i] = %i\n", i, vetor[i]);
    }
    // Mostrando quantos números foram digitados.
    printf("Quantidade de valores informados: %i\n", sizeof(vetor)/sizeof(int));
    // Mostrando o valor da terceira posição.
    printf("vetor[3] = %i\n", vetor[3]);
    system("pause");
}