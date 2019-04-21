#include <stdio.h>

// 1- Faça um algoritmo que leia um vetor "A" de 5 posições, e preencha um segundo vetor "B" da seguinte forma:

// - O valor da primeira posição do vetor "B" é igual ao primeiro valor do vetor "A" vezes o maior valor do vetor "A";

// - O valor da segunda posição do vetor "B" é igual ao segundo valor do vetor "A" vezes o segundo maior valor do vetor "A";

// - O valor da terceira posição do vetor "B" é igual ao terceiro valor do vetor "A" vezes o terceiro maior valor do vetor "A";

// - O valor da quarta posição do vetor "B" é igual ao quarto valor do vetor "A" vezes o quarto maior valor do vetor "A";

// - O valor da quinta posição do vetor "B" é igual ao quinto valor do vetor "A" vezes o quinto maior valor do vetor "A";


int main(void){

    int a[5], b[5], aOrdenado[5];

    for(int i = 0; i < 5; i++){
        printf("Informe o valor de a[%d]: ", i);
        scanf("%d", &a[i]);
        aOrdenado[i] = a[i];
    }

    // Ordenando o vetor
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(aOrdenado[j] > aOrdenado[i]){
                int temp = aOrdenado[j];
                aOrdenado[j] = aOrdenado[i];
                aOrdenado[i] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        b[i] = a[i] * aOrdenado[i];
        printf("%d\n", b[i]);
    }
}