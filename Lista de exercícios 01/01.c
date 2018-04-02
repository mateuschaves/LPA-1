#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * 1. Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.
 */
int main(){
    // Declarando a variável
    float r;
    printf("Digite o raio do circulo: ");
    // Lendo a variável do usuário
    scanf("%f", &r);
    // Mostrando o resultado
    printf("\nA area do circulo eh de : %.2f\n", pow(r, 2) * 3.1415926535898);
    system("pause");
}