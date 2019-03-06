#include <stdio.h>
#include <stdlib.h>

//  Faça um programa que receba dois números X e Y, sendo X < Y. Calcule e mostre:

// • a soma dos números pares desse intervalo de números, incluindo os números digitados;
// • a multiplicação dos números ímpares desse intervalo, incluindo os digitados;

void main(void){

    int x, y, sumPair = 0, multOdd = 1;
    scanf("%d%d", &x, &y);

    for(int i = x; i <= y; i++){
        if(i % 2 == 0)
            sumPair += i;
    }

    for(int i = x; i <= y; i++){
        if(i % 2 != 0){
            multOdd *= i;
        }
    }

    printf("Soma: %d\n", sumPair);
    printf("Multiplicacao: %d\n", multOdd);

    system("pause");
}