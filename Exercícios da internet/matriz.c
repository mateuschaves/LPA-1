#include <stdio.h>
#include <stdlib.h>
/*
    Criar um algoritmo que leia os elementos de uma matriz inteira de
    4 x 4 e imprimir os elementos da diagonal principal.
    {   1,   2,  3,  4
        5,   6,  7,  8
        9,  10, 11, 12
        13, 14, 15, 16  }
    
    (0,0), (1,1), (2,2), (3,3), (4,4);
*/
int main(){
    int m[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Informe o valor m[%i][%i]: ",i,j);
            scanf("%i", &m[i][j]);
        }
    }
    i = 0;
    j = 0;
    for(; i < 4; i++){
        for(; j < 4; j++){
            if(i == j){
                printf("%i\n", m[i][j]);
            }
        }
    j = 0;
    }
    system("pause");
}