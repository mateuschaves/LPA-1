#include <stdio.h>
#include <stdlib.h>
/*
        PROBLEMAS CONHECIDOS

    1. O algoritmo não consegue calcular com precisão
       a data final do evento quando se passa dois
       meses do início do evento.
    
*/


// Criando uma strutura ' classe ' chamada dma. 
struct dma {
    int dia;
    int mes;
    int ano;
};
// Renomeando dma para data.
typedef struct dma data;
// Declarando uma função.
data fimEvento (data inicio, int duracao);

void main(void){
    // Criando duas instâncias da ' classe ' data.
    data inicio;
    data fim_evento;
    // Iniciando as variáveis.
    inicio.dia = 14;
    inicio.mes = 5;
    inicio.ano = 2018;
    // Chamando a função que calcula a data final de um evento que inicia em 14/05/2018, com duração de 35 dias.
    fim_evento = fimEvento(inicio, 35);
    // Mostrando a data final do evento.
    printf("Data do fim do evento: %i/%i/%i\n", fim_evento.dia, fim_evento.mes, fim_evento.ano);
    system("pause");
}
data fimEvento (data inicio, int duracao) {
   // Criando uma instância da ' classe ' data para armazenar a data final do evento.
   data fim;
   // Verificando se o evento vai passar do mês atual.
   if( inicio.dia + duracao > 31 ){
       // Verificando se o mês é dezembro.
       if( inicio.mes == 12 ){
           // Se sim o fim do evento será no próximo ano, inicio.ano + 1.
           fim.ano = inicio.ano + 1;
           // Se sim o fim do evento será em janeiro, mês 1.
           fim.mes = 1;
       }
       // Se não, o fim do evento será no próximo mês, inicio.mes + 1.
       fim.mes = inicio.mes + 1;
       // Se não, o fim do evento será no próximo dia, inicio.dia + 1.
       fim.dia = (inicio.dia + duracao) - 31;
       // Se não, o fim do evento será no mesmo ano.
       fim.ano = inicio.ano;
   }else{
       // Aqui o final do evento será no mesmo mes do início.

       // O dia final do evento será a soma do dia de início com a duração, inicio.dia + duracao.
       fim.dia = inicio.dia + duracao;
       // O mês final do evento será o mesmo do início.
       fim.mes = inicio.mes;
       // O ano final do evento será o mesmo do início.
       fim.ano = inicio.ano;
   }
   // Retornando a data final do evento.
   return fim;
}