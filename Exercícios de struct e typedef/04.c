#include <stdio.h>
#include <stdlib.h>

void main(void){
    typedef struct {
        int mat;
        char nome[20];
        float n1, n2, med;
    } alunos;

    alunos aluno;

    printf("Informe a matricula do aluno: ");
    scanf("%i", &aluno.mat);
    printf("Informe a primeira nota: ");
    scanf("%f", &aluno.n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &aluno.n2);
    printf("Informe o nome do aluno: ");
    fflush(stdin);
    gets(aluno.nome);
    aluno.med = (aluno.n1 + aluno.n2) / 2;
    printf("A media do aluno %s eh : %f", aluno.nome, aluno.med);
    printf("\nMatricula: %i\n", aluno.mat);

    system("pause");
}