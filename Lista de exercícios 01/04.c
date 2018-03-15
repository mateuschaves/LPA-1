#include <stdio.h>
/*
    4.	Escreva um programa para ler uma temperatura em graus Fahrenheit,
        calcular e escrever o valor correspondente em graus Celsius.
*/
int main(){
    float celsius, fahrenheit;
    printf("Informe a temperatura em graus celsisu : ");
    scanf("%f", &celsius);
    fahrenheit = ((celsius / 5)*9) + 32;
    printf("A temperatura em fahrenheit eh de : %.2f", fahrenheit);
    printf("\nPressione qualquer tecla para sair do programa...");
    scanf("%f", &celsius);
}