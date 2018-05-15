#include <stdio.h>
#include <stdlib.h>

void main(void){
    struct dma{
        int dia;
        int mes;
        int ano;
    };
    typedef struct dma data;
    data hoje;
    hoje.dia = 14;
    hoje.mes = 5;
    hoje.ano = 2018;
    printf("%i/%i/%i\n", hoje.dia, hoje.mes, hoje.ano);
    system("pause");
}