#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
     Solicitar um nome e escrevê-lo de trás pra frente
*/
int main(){
    char nome[30];
    int i, t;
    printf("Informe o seu nome: ");
    gets(nome);
    t = strlen(nome);
    i = t - 1;
    printf("Seu nome de tras pra frente: ");
    for(; i >= 0; i--){
        printf("%c", nome[i]);
    }
    printf("\n");
    system("pause");
}