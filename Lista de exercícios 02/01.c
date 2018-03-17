#include <stdio.h>

/*
1.	Escreva um programa para ler dois números inteiros e exibir qual é o maior.
    Depois verifique se forem iguais e exiba a mensagem são iguais. 
*/
int main(){
    int n1, n2;
    char bye;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    if(n1 == n2){
        printf("Os numeros informados sao iguais.");
        printf("\nPressione qualquer tecla para sair do programa.");
        scanf("%i", &n1);
        return 0;
    }
    if(n1 > n2){
        printf("O maior numero digitado foi : %i", n1);
        printf("\nPressione qualquer tecla para sair do programa.");
        scanf("%i", &n1);
    }else{
        printf("O maior numero digitado foi: %i", n2);
        printf("\nPressione qualquer tecla para sair do programa.");
        scanf("%i", &n1);
    }
    
}