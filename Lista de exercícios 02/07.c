#include <stdio.h>
#include <stdlib.h>
/*
    7.	Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de uma pessoa,
        construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:
        - para homens : (72.7 * h) – 58
        - para mulheres : (62.1 * h) – 44.7
        Observação: Altura = h (na fórmula acima).
*/
int main(){
    int sexo;
    float altura, peso;
    printf("Informe seu sexo ( 1: Feminino 2: Masculino ): ");
    scanf("%i", &sexo);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    if(sexo == 1){
        peso = (62.1 * altura) - 44.7;
    }else if(sexo == 2){
        peso = (72.7 * altura) - 58;
    }
    printf("Seu peso ideal eh: %f\n", peso);
    system("PAUSE");
}