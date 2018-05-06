#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    13.	Em uma competição de salto em distância cada atleta tem direito a cinco saltos.
        O resultado do atleta será determinado pela média dos cinco valores restantes.
        Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas
        pelo atleta em seus saltos e depois informe o nome, os saltos e a média dos saltos.
        O programa deve ser encerrado quando não for informado o nome do atleta
*/
void main(void){
    float saltos[5], media;
    int i, parada = 0, tamanho = sizeof(saltos)/sizeof(int);
    char nome[60];
    // Parada vai ser 1 quando o usuário digitar 0 para o nome.
    while(parada != 1){
        printf("\n\nInforme o nome do atleta: ");
        scanf("%s", &nome);
        // Nome não informado.
        if(strcmp(nome, "0") == 0){
            break;
        }
        // Lendo as 5 distâncias do salto do atleta.
        for(i = 0; i < tamanho; i++){
            printf("Informe a distancia do salto %i: ", i+1);
            fflush(stdin);
            scanf(" %f", &saltos[i]);
            media += saltos[i];
        }
        // Calculando a média dos distâncias dos saltos.
        media /= (float) tamanho;
        // Mostrando o nome do atleta.
        printf("Atleta: %s\n", nome);
        // Mostrando as distâncias dos saltos.
        for(i = 0; i < tamanho; i++){
            printf(" Salto %i = %.2f\n", i+1, saltos[i]);
        }
        // Mostrando a média das distâncias.
        printf("Media dos saltos: %.2f\n", media);
        media = 0;
    }   
    system("pause");
}
