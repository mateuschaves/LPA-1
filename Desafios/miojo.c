#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
    char nome[100], nome_maior_media[100];
    int idades, i, o = 0, l = 0, idade_menor_media, alunos = 1;;
    float media[1024], notas[3], menor_media = 10, maior_media = 0;
    while(2){
        printf("Informe o seu nome: ");
        fflush(stdin);
        gets(nome);
        if(strcmp(nome, "fim") == 0){
            break;
        }
        for(i = 0; i < 3; i++){
            printf("Informe a nota %i: ", i+1);
            fflush(stdin);
            scanf("%f", &notas[i]);
        }
        printf("Informe a sua idade: ");
        fflush(stdin);
        scanf("%i", &idades);
        media[o] = (notas[0] + notas[1] + notas[2]) / 3; 
        if(media[o] < menor_media){
            menor_media = media[o];
            idade_menor_media = idades;
        }
        if(media[o] > maior_media){
            maior_media = media[o];
            strcpy(nome_maior_media, strupr(nome));
        }
        o++;
    }

    printf("O nome do aluno com maior media: %s\n", nome_maior_media);
    printf("A idade do aluno com menor media: %i\n", idade_menor_media);
    printf("Quantidade de alunos cadastrados: %i\n", o);
    printf("menor media %f\n", menor_media);
    system("pause");
}
