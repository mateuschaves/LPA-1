#include <stdio.h>
#include <stdlib.h>

void main(void){


    int base = 0, expoente = 0, resultado = 1;

    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);

    /*
        =-=-=- Before start loop =-=-=-=
        expoente = 2;
        base = 2;
        resultado = 1;

        =-=-=- Interation 1/2 =-=-=-=-=-
        resultado = 2;

        =-=-=- Interation 2/2 =-=-=-=-=-
        resultado = 4;
    */

    for(int i = 0; i < expoente; i++){
        resultado *= base; 
    }

    printf("Resultado: %d\n", resultado);

    system("pause");
}