#include <stdio.h>
#include <stdlib.h>

void main(void){
    int numeros[20], pares[20], p = 0, impares[20], im = 0, i = 0;
    for(i = 0; i < 20; i++){
        printf("Informe o %i numero: ", i+1);
        scanf("%i", &numeros[i]);
        if(numeros[i] % 2 == 0){
            pares[p] = numeros[i];
            p++;
        }else{
            impares[im] = numeros[i];
            im++;
        }
    }
    printf("\n ---- NUMEROS DIGITADOS ----- \n");
    for(i = 0; i < 20; i++){
        printf("numeros[%i] = %i\n", i, numeros[i]);
    }
    printf("\n ---- NUMEROS PARES -------\n");
    for(i = 0; i < p; i++){
        printf("pares[%i] = %i\n", i, pares[i]);
    }
    printf("\n ---- NUMEROS IMPARES -----\n");
    for(i = 0; i < im; i++){
        printf("impares[%i] = %i\n", i, impares[i]);
    }
    system("pause");
}