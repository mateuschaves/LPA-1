#include <stdio.h>
#include <stdlib.h>
/* 
    Programa para calcular a soma de um conjunto de valores reais positivos.
    O flag é um valor negativo. O término ocorrerpa quando o flag for lido.
*/
void main(void){
    float conjunto[100], n, somador = 0;
    int i = 0, m = 0;
    do{
        printf("Informe um valor real positivo: ");
        scanf("%f", &n);
        if(n < 0){
            break;
        }else{
            conjunto[i] = n;
            i++;
        }
    }while(1);
    i--;
    for(m = i; m >= 0; m--){
        printf("conjunto[%i] = %.2f \n", m, conjunto[m]);
        somador += conjunto[m];
    }
    printf("Soma do conjunto: %.2f\n", somador);
    system("pause");
}