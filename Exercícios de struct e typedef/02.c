#include <stdio.h>
#include <stdlib.h>
struct dma {
    int dia;
    int mes;
    int ano;
};
typedef struct dma data;
data fimEvento (data inicio, int duracao);
void main(void){
    data inicio;
    data fim_evento;
    inicio.dia = 14;
    inicio.mes = 5;
    inicio.ano = 2018;
    fim_evento = fimEvento(inicio, 60);
    printf("Data do fim do evento: %i/%i/%i\n", fim_evento.dia, fim_evento.mes, fim_evento.ano);
    system("pause");
}
data fimEvento (data inicio, int duracao) {
   data fim;
   if( inicio.dia + duracao > 31 ){
       if( inicio.mes == 12 ){
           fim.ano = inicio.ano + 1;
           fim.mes = 1;
       }
       fim.mes = inicio.mes + 1;
       fim.dia = (inicio.dia + duracao) - 31;
       fim.ano = inicio.ano;
   }else{
       fim.dia = inicio.dia + duracao;
       fim.mes = inicio.mes;
       fim.ano = inicio.ano;
   }
   return fim;
}