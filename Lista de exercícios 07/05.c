#include <stdio.h>
#include <stdlib.h>

/*
    Crie um programa que calcule o tamanho de uma string (Não pode usar a função
    strlen), crie sua própria strlen.
*/

void main(void){
    char string[] = "Meunomejulia";
    int tamanho = (sizeof(string)/sizeof(char)) - 1;
    printf("Tamanho da string: %i\n",tamanho);
    system("pause");
}