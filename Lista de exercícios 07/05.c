#include <stdio.h>
#include <stdlib.h>

/*
    Crie um programa que calcule o tamanho de uma string (Não pode usar a função
    strlen), crie sua própria strlen.
*/

void main(void){
    char string[1024];
    int i;
    printf("Informe uma frase: ");
    gets(string);
    while(string[i] != '\0'){
        i++;
    }
    printf("A frase informada tem %i caracteres.\n", i);
    system("pause");
}