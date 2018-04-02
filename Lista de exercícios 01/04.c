#include <stdio.h>
#include <stdlib.h>
/*
    4.	Escreva um programa para ler uma temperatura em graus Fahrenheit,
        calcular e escrever o valor correspondente em graus Celsius.
*/
int main(){
    // Declarando as variáveis
    float celsius, fahrenheit;
    printf("Informe a temperatura em graus celsisu : ");
    // Lendo o valor do usuário
    scanf("%f", &celsius);
    // Calculando a temperatura em fahrenheit
    fahrenheit = ((celsius / 5)*9) + 32;
    // Mostrando o valor na tela
    printf("A temperatura em fahrenheit eh de : %.2f\n", fahrenheit);
    system("pause");
}