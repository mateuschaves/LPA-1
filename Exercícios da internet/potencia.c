#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, controlador = 0, soma = 0, i = 1;
    printf("Informe o valor que deseja elevar ao quadrado: ");
    scanf("%i", &n);
    while(controlador < n){
        if(i % 2 != 0){
            soma += i;
            controlador++;
        }
        i++;
    }
    printf("%i^2 = %i", n, soma);
    printf("\n");
    system("pause");
}