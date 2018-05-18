#include <stdio.h>
#include <stdlib.h>

void main(void){
    typedef struct {
        int mat;
        char nome[20];
        float n1, n2, med;
    } alunos;
    int i;
    alunos alunoss[10];
    for(i = 0; i < 20; i++){
        printf("Informe a matricula do aluno: ");
        scanf("%i", &alunoss[i].mat);
        printf("Informe a primeira nota: ");
        scanf("%f", &alunoss[i].n1);
        printf("Informe a segunda nota: ");
        scanf("%f", &alunoss[i].n2);
        printf("Informe o nome do aluno: ");
        fflush(stdin);
        gets(alunoss[i].nome);
        alunoss[i].med = (alunoss[i].n1 + alunoss[i].n2) / 2;
        printf("A media do aluno %s eh : %f", alunoss[i].nome, alunoss[i].med);
        printf("\nMatricula: %i\n", alunoss[i].mat);

    }
    
    system("pause");
}