#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function(float x);
float derive(double h, float x);

void main(void){
    float point, slope;
    printf("Informe o ponto em que deseja derivar: ");
    scanf("%f", &point);
    slope = derive(0.000001, point);
    printf("A derivada no ponto %.2f eh : %f\n", point, slope);
    system("pause");
}

// Função que vai ser derivada.
float function(float x){
    return 1  / sqrt(2*x); 
}

// Função que calcula a derivada através do limite.
float derive(double h, float x){
    printf("Valor de h: %2.f\n", h);
    printf("Valor de x: %2.f\n", x);
    float fxh = function(x+h);
    float fx  = function(x);
    float slope = (fxh - fx) / h;
    return slope;
}