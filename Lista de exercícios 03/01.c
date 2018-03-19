#include <stdio.h>
#include <stdlib.h>
/*
    1.	Escreva um programa Pascal que apresente o menu de opções abaixo:
    OPÇÕES:
    1 - SAUDAÇÃO
    2 - BRONCA
    3 - FELICITAÇÃO
    0 - FIM
            O programa deve ler a opção do usuário e exibir, para cada opção, a respectiva mensagem:
    1 - Olá. Como vai ?
    2 - Vamos estudar mais.
    3 - Meus Parabéns !
    0 - Fim de serviço.
*/
int main(){
    int option;
    do{
        printf("Opcoes: \n 1) Saudacoes. \n 2) Bronca. \n 3) Felicitacao. \n 0) Fim.\n >> ");
        scanf("%i", &option);
        switch(option){
            case 1:
                printf("Ola. Como vai ? \n\n");
                break;
            case 2:
                printf("Vamos estudar mais. \n\n");
                break;
            case 3:
                printf("Meus Parabens ! \n\n");
                break;
            default:
                printf("Informe um numero entre 0 a 3 apenas. \n\n");
        }
    }while(option != 0);
    printf("O programa foi encerrado.\n\n");
    system("pause");
}