#include <stdio.h>
#include <stdlib.h>


int pow(int base, int expoente);

void main(void){

    int resultado = pow(2, 3);

    printf("Resultado: %d\n", resultado);

    system("pause");
}

int pow(int base, int expoente){
    if( expoente == 0 ) 
        return 1;
    else
        return base * pow( base, expoente - 1 );
}