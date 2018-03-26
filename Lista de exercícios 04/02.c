#include <stdio.h>
#include <stdlib.h>
/*
    2.	Faça um programa que peça um número inteiro e determine se ele é ou não um número 
        primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1. 
*/
int main(){
    int n, c, i, menu;
    do{
        n, i, c = 0;
        printf("Informe um numero inteiro: ");
        scanf("%i", &n);
        i = n;
        for(; i > 0; i--){
            if(n%i == 0){
                c++;
            }
        }
        if(c == 2){
            printf("\n\nO numero %i eh primo.\n\n\n", n);
        }else{
            printf("\n\nO numero %i nao eh primo, ele possui %i divisores.\n\n\n", n, c);
        }
        printf("Digite:\n1) Para continuar\n0) Para sair\n");
        scanf("%i", &menu);
        system("cls");
    }while(menu != 0);
    system("pause");
}