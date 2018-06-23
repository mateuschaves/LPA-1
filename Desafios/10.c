#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
    typedef struct {
        char nome[60];
        float notas[3];
        int serie;
        char disciplina[20];
        float media;
    }registro_aluno;

    registro_aluno alunos[100];

    int menu = 1, i = 0, indice_maior = 0, maior_media = 0;

    while(menu != 0){
            printf("Informe o nome do aluno: ");
            fflush(stdin);
            fgets(alunos[i].nome, 60, stdin);
            printf("Informe a serie do aluno (1, 2 ou 3): ");
            fflush(stdin);
            scanf("%i", &alunos[i].serie);
            printf("Informe a disciplina do aluno: ");
            fflush(stdin);
            fgets(alunos[i].disciplina, 20, stdin);
            for(int l = 0; l < 3; l++){
                printf("Informe a nota %i: ", l + 1);
                fflush(stdin);
                scanf("%f", &alunos[i].notas[l]);
            }
            alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;
            if(alunos[i].media > alunos[indice_maior].media){
                indice_maior = i;
            }
            i++;
            printf("Deseja continuar ? 1 - Sim 0 - Não");
            fflush(stdin);
            scanf("%i", &menu);
    }
    printf("\n\n\n-------Listando os alunos em recupercao-----\n\n");
    for(int o = 0; o < i; o++){
        if(alunos[o].media < 7){
            printf("Nome: %s\n", alunos[o].nome);
            printf("Media: %.2f\n", alunos[o].media);
        }
    }
    printf("\n\n-----Aluno com maior media-----\n\n");
    printf("Nome: %s\n", alunos[indice_maior].nome);
    printf("Serie: %i\n", alunos[indice_maior].serie);
    printf("Disciplina: %s\n", alunos[indice_maior].disciplina);
    printf("Media: %.2f\n", alunos[indice_maior].media);
    system("pause");
}