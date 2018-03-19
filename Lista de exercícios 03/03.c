#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
    3.	Um máquina virtual recebe um valor e exibe o seu quadrado quando ele é par,
        e o seu cubo quando ele é impar.Faça um programa para esse máquina.
*/
int main(){
    int valor, resultado;
    printf("Informe o valor: ");
    scanf("%i", &valor);
    if((valor%2) == 0){
        resultado = pow(valor, 2);
        printf("%i^2  =  %i\n", valor, resultado);
    }else{
        resultado = pow(valor, 3);
        printf("%i^3  =  %i\n", valor, resultado);
    }
    system("pause");
}