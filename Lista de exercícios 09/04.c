#include <stdio.h>
#include <stdlib.h>

/*
    Faça uma função que receba um valor inteiro e positivo e calcula o seu
    fatorial.
*/

int factorial (int n);

void main(void){
    int f;
    f = factorial(6);
    printf("%i\n", f);
    system("pause");
}

int factorial (int n){
    int f = 1;
    for(int i = n; i > 1; i--){
        f *= i;
    }
    return f;
}