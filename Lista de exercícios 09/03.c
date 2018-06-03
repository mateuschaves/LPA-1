#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    Faça uma função que recebe por parâmetro os valores necessário para
    o cálculo da fórmula de báskara e retorna, também por parâmetro, as
    suas raízes, caso seja possível calcular
*/
typedef struct {
    float r1;
    float r2;
} roots;
roots root;

void eqroots(float a, float b, float c);

void main(void){
    eqroots(9,-12,4);
    if(root.r1 != 0)
        printf("R 1: %.2f\n", root.r1);
    if(root.r2 != 0)
        printf("R 2: %.2f\n", root.r2);
    if(root.r2 == 0 && root.r1 == 0)
        printf("\n\nNao existem raizes reais para essa equacao !\n\n");
    system("pause");
}

void eqroots(float a, float b, float c){
    float delta;
    delta = pow(b,2) - 4 * a * c;
    if(delta > 0){
        root.r1 = ( (-b) + sqrt(delta)) / (float) (2*a);
        root.r2 = ( (-b) - sqrt(delta)) / (float) (2*a);
    }else if (delta == 0){
        root.r1 = (-b) / (float) (2*a);
    }
}
