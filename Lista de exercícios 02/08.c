#include <stdio.h>
#include <stdlib.h>
/*
    8.	Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é Equilátero,
        Isósceles ou Escaleno. Sendo que:
        - Triângulo Equilátero: possui os 3 lados iguais.
        - Triângulo Isósceles: possui 2 lados iguais.
        - Triângulo Escaleno: possui 3 lados diferentes.

*/
int main(){
    float lados[3] = {0,0,0};
    int i, tamanho, l = 1;
    tamanho = sizeof(lados)/sizeof(int);
    for(i = 0; i < tamanho; i++){
        printf("Digite o %i lado do triangulo: ", l);
        scanf("%f", &lados[i]);
        l++;
    }
    if(lados[0] == lados[1] && lados[0] == lados[2]){
        printf("Equilatero.\n");
    }else if( ( (lados[0] != lados[1]) && (lados[0] != lados[2]) ) && ( (lados[1] != lados[0]) && (lados[1] != lados[2]) ) && ( (lados[2] != lados[0]) && (lados[2] != lados[1]) )){
        printf("Escaleno.\n");
    }else{
        printf("Isosceles.\n");
    }
    system("PAUSE");
}