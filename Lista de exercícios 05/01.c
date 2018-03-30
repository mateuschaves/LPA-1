#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    1.	Faça um programa que leia um caracter do usuário
        e a sua senha e não aceite a senha igual ao nome
        do usuário, mostrando uma mensagem de erro e voltando
        a pedir as informações.
*/
int main(){
    char nome[50], senha[20];
    int v=0, c = 0, l = 0;
    do{
        if(l > 0){
            printf("\nSua senha nao pode ser igual ao seu nome !\n\n");
        }
        printf("Informe o seu nome: ");
        gets(nome);
        printf("Informe a sua senha: ");
        gets(senha);
        c = strcmp(senha,nome);
        if(c != 0){
            v++;
        }
        l++;
    }while(v != 1);
    system("pause");
}