#include <stdio.h>
#include <stdlib.h>

/*
    Faça uma função que receba um valor inteiro e positivo e calcula o seu
    fatorial.
*/

int factorial (int n);

void main(void){
    int f, n;
    printf("Informe o valor: ");
    if(!scanf("%i", &n)){
        printf("\nValor digitado não é do tipo inteiro !\n");
    }else{
        if(n > 0){
            f = factorial(n);
            printf("%i\n", f);
        }else{
            printf("Valor informado não é positivo !");
        }
    }
    system("pause");
}

int factorial (int n){
    int f = 1;
    for(int i = n; i > 1; i--){
        f *= i;
    }
    return f;
}