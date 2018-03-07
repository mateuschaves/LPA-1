#include <stdio.h>

//Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.

int main(){
    int n, bye = 0;
    printf("Informe um numero: ");
    scanf("%i", &n);
    if( n % 5 == 0 && n % 3 == 0 ){
        printf("%i E divisivel por 3 e 5", n);
    }else{
        printf("%i Nao e divisivel por 3 e 5.", n);
    }
    scanf("%i", &bye);
}