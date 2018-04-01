#include <stdio.h>
#include <stdlib.h>
/*
   5.	Uma pesquisa   sobre   algumas   características   físicas
        da população de uma determinada região coletou os seguintes
        dados, referentes a cada habitante, para análise:

        a) sexo (masculino, feminino);
        b) cor dos olhos (azuis, verdes, castanhos);
        c) cor dos cabelos (louros, castanhos, pretos);
        d) idade em anos.
        Para cada habitante  foi preenchido um cartão  com estes  dados  e o último  cartão,  que não 
        corresponde a ninguém, contém o valor de idade igual a -1. Fazer um programa que determine e  escreva:
        a) a maior idade dos habitantes;
        b) a porcentagem de  indivíduos do sexo  feminino cuja  idade está entre 18 e 35 
        anos, inclusive, e que tenham olhos verdes e cabelos louros.
*/
int main(){
    int  cor_olhos, cor_cabelos, idade = 0, maior_idade = 0, p = 0, i, sexo, menu, v = 0;
    float porcentagem;
    do{
        v = 0;
        printf("PESSOA: %i\n", i+1);
        do{
            sexo = 0;
            printf("Informe o seu sexo: (1 - Masculino, 2 - Feminino) ");
            fflush(stdin);
            scanf("%i", &sexo);
            if(sexo == 1 || sexo == 2){
                v = 1;
            }else{
                printf("ERRO - Essa opcao nao existe ! \n");
            }
        }while(v != 1);
        v = 0;
        do{
            cor_olhos = 0;
            printf("Informe a cor do seus olhos: (1 - Azuis, 2 - Verdes, 3 - Castanhos) ");
            fflush(stdin);
            scanf("%i", &cor_olhos);
            if(cor_olhos == 1 || cor_olhos == 2 || cor_olhos == 3){
                v = 1;
            }else{
                printf("ERRO - Essa opcao nao existe ! \n");
            }
        }while(v != 1);
        v = 0;
        do{
            cor_cabelos = 0;
            printf("Informe a cor do seu cabelo: (1 - Loiro, 2 - Castanho, 3 - Preto) ");
            fflush(stdin);
            scanf("%i", &cor_cabelos);
            if(cor_cabelos == 1 || cor_cabelos == 2 || cor_cabelos == 3){
                v = 1;
            }else{
                printf("ERRO - Essa opcao nao existe ! \n");
            }
        }while(v != 1);
        v = 0;
        do{
            v = 0; 
            printf("Informe a sua idade: ");
            fflush(stdin);
            v = scanf("%i", &idade);
        }while(v != 1);
        v = 0;
        if(idade >= maior_idade){
            maior_idade = idade;
        }
        if((sexo == 2) && (idade >= 18 && idade <= 35) && (cor_olhos == 2) && (cor_cabelos == 1)){
            p++;
        }
        do{
            menu = 2;
            printf("Digite:\n1) Para continuar.\n0) Para sair\n>>>> ");
            fflush(stdin);
            scanf("%i", &menu);
            if(menu == 1 || menu == 0){
                v = 1;
            }else{
                printf("ERRO - Essa opcao nao existe ! \n");
            }
        }while(v != 1);
        i++;
    }while(menu != 0);
    porcentagem = ((float) p / (float) i)*100;
    printf("A maior idade registrada: %i\n", maior_idade);
    printf("A porcentagem de individuos do sexo feminino, entre 18 e 35 anos com olhos verdes e cabelos loiros: %.2f %%\n", porcentagem);
    system("pause");
}