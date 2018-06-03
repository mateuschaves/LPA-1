#include <stdio.h>
#include <stdlib.h>

/*
    Faça uma função que receba um valor inteiro e positivo e calcula o
    número de fibonacci na posição passada como parâmetro
*/

int fibonacci(int n);

void main(void){
    int n, valor;
    printf("Informe a posicao da sequencia: ");
    scanf("%i", &n);
    valor = fibonacci(n);
    printf("Valor: %i\n\n", valor);
    system("pause");
}

int fibonacci(int n){
    int i, squence[n];
    squence[0] = 0;
    squence[1] = 1;
    for(i = 2; i < n; i++){
        squence[i] = squence[i - 1] + squence[i - 2];
    }
    return squence[i - 1];
}