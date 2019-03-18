#include <stdio.h>
#include <stdlib.h>

int isPrimo(int n);

void main(void){
    /*
		Faça um programa que receba um número inteiro n do usuário e
        imprima todos os números primos de 1 a n.
	*/
    int n, divisores;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(isPrimo(i) == 1)
            printf("%d\n", i);
    }

    system("pause");
    return 0;
}

int isPrimo(int n){
    int d = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}