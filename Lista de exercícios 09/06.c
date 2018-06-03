#include <stdio.h>
#include <stdlib.h>

/*
    Escreva uma função que recebe, por parâmetro, dois valores X e Z e
    calcula e retorna X^z. (sem utilizar funções ou operadores de potência
    prontos)
*/

float pow(float a, float b);

void main(void){
    float b, a, po;
    printf("Informa a base: ");
    scanf("%f", &a);
    printf("Informe o expoente: ");
    scanf("%f", &b);
    po = pow(a,b);
    printf("%.2f: ", po);
    system("pause");
}

float pow(float a, float b){
    float power = 1;
    for(int i = 1; i <= b; i++){
        power *= a;
    }
    return power;
}
