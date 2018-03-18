#include <stdio.h>
#include <stdlib.h>
 /*
        5.	Escreva um programa para ler o número de gols marcados pelo Grêmio
            e o número de gols marcados pelo Inter em um GRENAL. Escrever o nome
            do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.
    */
int main(){
    int gremio, inter;
    printf("Informe o numero de gols do gremio: ");
    scanf("%i", &gremio);
    printf("Informe o numero de gols do inter: ");
    scanf("%i", &inter);
    if(inter == gremio){
        printf("EMPATE\n");
    }else if(inter > gremio){
        printf("Vencedo: Inter\n");
    }else{
        printf("Vencedor: Gremio\n");
    }
    system("PAUSE");
}