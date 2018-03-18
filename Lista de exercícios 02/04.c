#include <stdio.h>
#include <stdlib.h>

/*
    4.	Escreva um programa que verifique a validade de uma senha fornecida pelo usuário.
        A senha válida é o número 1234. Devem ser impressas as seguintes mensagens:
        ACESSO PERMITIDO caso a senha seja válida.
        ACESSO NEGADO caso a senha seja inválida.
*/

int main(){
    int senha = 1234;
    int try;
    printf("Informe a senha: ");
    scanf("%i", &try);
    if(try == senha){
        printf("ACESSO PERMITIDO\n");
    }else{
        printf("ACESSO NEGADO\n");
    }
    system("PAUSE");
}