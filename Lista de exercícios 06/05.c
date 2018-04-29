#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
        5.	Escreva um programa que leia o primeiro nome e a altura das moças inscritas
            em um concurso de  beleza. Quando for informada a palavra FIM para o nome
            da moça o programa deverá ser encerrado e imprimir: o nome e a altura da
            moça mais alta e o número de moças no concurso. Considere que todas as moças
            possuem altura diferente
*/

void main(void){
    char nomes[100][60], *nome_alto = "Ninguem", nome[60];
    float alturas[1024], altura = 0;
    int i = 0, comp;
    while(1){
        printf("Informe seu nome: ");
        fflush(stdin);
        scanf(" %s", &nome);
        strcpy(nomes[i], nome);
        if( (strcmp(nomes[i], "FIM") == 0) || (strcmp(nomes[i], "fim") == 0) ){
          break;
        }
        printf("Informe sua altura: ");
        fflush(stdin);
        scanf(" %f", &alturas[i]);
        if(alturas[i] > altura){
            altura       =   alturas[i];
            nome_alto    =   nomes[i];
        }
        i++;
    }
    printf("\n\n\nNome da pessoa mais alta: %s\n", nome_alto);
    printf("Altura da pessoa mais alta: %.2f\n", altura);
    printf("Quantidade de participantes: %i\n", i);
    system("pause");
}