#include <stdio.h>
#include <stdlib.h>
// Algoritmo que informa quantos pontos faltam na prova de mirele pra passar em GA, porque eu tenho preguiça de fazer na calculadora.


int main(){
    float media_primeira_unidade = 8.75, nota_alex_segunda_unidade = 1.5, nota_restante_mirele = 0, nota_seminario_alex = 1.5, media_segunda_unidade = 0, media_final = 0;
    media_segunda_unidade =  (nota_alex_segunda_unidade + nota_seminario_alex) / 2;
    media_final = (media_primeira_unidade + media_segunda_unidade) / 2;
    nota_restante_mirele = (7 - media_final ) * 4;
    printf("Media final: %.2f\n", media_final);
    printf("Bixo, tu precisa tirar %.2f na prova de mirele pra passar !\n", nota_restante_mirele);
    system("pause");
}