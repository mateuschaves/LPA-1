#include <stdio.h>
#include <stdlib.h>
/*
 3.	Faça um programa que leia um valor n, inteiro e positivo, calcule e mostre a soma S 
    da seguinte forma: S= 1 + 1/2 + 1/3 + 1/4 +... + 1/n.
*/
int main(){
    double soma;
    float i;
    int n;
    printf("Informe um numero inteiro e positivo: ");
    scanf("%i", &n);
    if(n <= 0){
        printf("O numero precisa ser positivo.");
        return 1;
    }
    i = 2;
    for(; i <= n; i++){
        soma += (1/i);
    }
    soma++;
    printf("O resultado da soma: %.5f\n", soma);
    system("pause");
}