#include <stdio.h>

// Dado um inteiro não negativo n, determinar n!;

int main (){
    int numero, resultado, bye = 0;
    printf("Digite um numero \n");
    scanf("%i", &numero);
    if(numero < 0){
        printf("N nao pode ser negativo !");
    }
    for(int i = numero - 1; i!=1 ; i--){
        printf("%i\n", i);
        numero *=i;
    }
    resultado = numero;
    printf("Resultado: %i", resultado);
    printf("\nPressiona qualquer tecla para sair do programa.\n");
    scanf("%i", &bye);
    return 0;
}