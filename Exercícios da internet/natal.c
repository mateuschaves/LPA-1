#include <stdio.h>
#include <stdlib.h>
/*
     Escreva um programa em C que coloque na tela meia árvore de Natal com asteriscos.
    O número de ramos deverá ser introduzido pelo usuário
*/
void main(void){
    int ramos;
    printf("Informe a quantidade de ramos: ");
    scanf("%i", &ramos);
    for(int i = 1; i <= ramos; i++){
        for(int o = 0; o < i; o++){
            printf("*");
        }
        printf("\n");
    }
    system("pause");
}