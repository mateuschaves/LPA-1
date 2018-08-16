#include <stdio.h>
#include <stdlib.h>


void main(void){

    int colunas, linhas, escalar;
    printf("Quantas linhas tem a matriz ? ");
    scanf("%i", &linhas);
    printf("Quantas colunas tem a matriz ? ");
    scanf("%i", &colunas);
    float matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Informe o valor da matriz na posicao [%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Informe o valor do escalar que vai multiplicar a matriz: ");
    scanf("%i", &escalar);
    
    for (int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] *= escalar;
        }
    }

    for (int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%2.f", matriz[i][j]);
        }
    }
    system("pause");
}