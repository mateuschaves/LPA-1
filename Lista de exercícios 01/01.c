#include <stdio.h>
#include <math.h>

/*
 * 1. Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.
 */

int main(){
    float r;
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    printf("\nA area do circulo eh de : %.2f", pow(r, 2) * 3.1415926535898);
    printf("\nPressione qualquer tecla para sair do programa.");
    scanf("%f", r);
}