#include <stdio.h>
#include <stdlib.h>

void main(void){
    // Cria uma estrutura ' classe ' chamada dma.
    struct dma{
        // Propriedades da ' classe ' dma.
        int dia;
        int mes;
        int ano;
    };
    // Renomeando o tipo ' struct dma ' para ' data '.
    typedef struct dma data;
    // Instânciando a ' classe ' dma que agora é ' data '. 
    data hoje;
    // Acessando as propriedades da ' classe '.
    hoje.dia = 14;
    hoje.mes = 5;
    hoje.ano = 2018;
    printf("%i/%i/%i\n", hoje.dia, hoje.mes, hoje.ano);
    system("pause");
}