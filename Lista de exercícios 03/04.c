#include <stdio.h>
#include <stdlib.h>
/*
   4.	Entrar com o ano e informar se o mesmo é bissexto ou não.
        Como funciona o ano bissexto ver opções a abaixo tabela abaixo:
        1- Todo ano divisível por 4 é bissexto;
        2- Todo ano divisível por 100 não é ano bissexto;
        3- Mas se o   ano for também divisível por 400 é ano bissexto;
*/
int main(){
    int ano;
    printf("Informe o ano: ");
    scanf("%i", &ano);
    if( (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0 && ano % 100 != 0)){
        printf("O ano e bissexto ! \n");
    }else{
        printf("O ano nao eh bissexto! \n");
    }
    system("pause");
}