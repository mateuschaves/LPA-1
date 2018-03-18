#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
2.	Escreva um programa para ler o ano de nascimento de uma pessoa
    e escrever uma mensagem que diga se ela poderá ou não votar
    este ano (não é necessário considerar o mês em que ela nasceu).
*/

int main(){
    int ano_nascimento, ano_atual, idade;
    time_t current_time;
	struct tm *time_info;
	char year[5];
	current_time = time(NULL);
	time_info = localtime(&current_time);
	strftime(year, 5, "%Y", time_info);
    ano_atual = atoi(year);
    printf("Digite o ano de nascimento: ");
    scanf("%i", &ano_nascimento);
    if(ano_atual < ano_nascimento){
        printf("\nAno de nascimento não pode ser maior que o ano atual\n");
        return 1;
    }
    idade = ano_atual - ano_nascimento;
    if(idade >= 16 && idade < 18){
        printf("Voce pode votar ! \n");
    }else if (idade >= 18){
        printf("Voce tem que votar ! \n");
    }else{
        printf("Voce nao pode votar ! \n");
    }
    system("PAUSE");
    return 0;
}