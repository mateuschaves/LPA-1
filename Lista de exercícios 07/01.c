#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Fazer um programa em "C" que pergunta o nome, o endereço, o telefone e a idade de
    uma pessoa e monta um string com a seguinte frase: "Seu nome é ..., você tem ...
    anos, mora na rua ... e seu telefone é ... ."
*/

void main(void){
    char name[200], address[200], phone[200], string[200], age[20];
    printf("Informe o seu nome: ");
    gets(name);
    printf("Informe o seu endereco: ");
    gets(address);
    printf("Informe o seu telefone: Ex. (81) 9 9972-1819 -> ");
    gets(phone);
    printf("Informe a sua idade: ");
    gets(age);
    strcat(string, "Seu nome eh ");
    strcat(string, name);
    strcat(string, ", voce tem ");
    strcat(string, age);
    strcat(string, " anos, ");
    strcat(string, "mora na rua ");
    strcat(string, address);
    strcat(string, ", e seu telefone eh ");
    strcat(string, phone);
    puts(string);
    system("pause");
}
