#include <stdio.h>
#include <stdlib.h>

void main(void){
typedef struct {
        int mat;
        char nome[20];
        float n1, n2, med;
    } alunos;
    int i = 0, indicemaior, menu = 1;
    float maior_media = 0;
    alunos alunoss[1024];
    while(menu != 4){
        switch(menu){
            case 1:
                printf("Informe a matricula do aluno: ");
                fflush(stdin);
                scanf("%i", &alunoss[i].mat);
                printf("Informe a primeira nota: ");
                fflush(stdin);
                scanf("%f", &alunoss[i].n1);
                printf("Informe a segunda nota: ");
                fflush(stdin);
                scanf("%f", &alunoss[i].n2);
                printf("Informe o nome do aluno: ");
                fflush(stdin);
                gets(alunoss[i].nome);
                alunoss[i].med = (alunoss[i].n1 + alunoss[i].n2) / 2;
                if(alunoss[i].med > maior_media){
                    maior_media = alunoss[i].med;
                    indicemaior = i;
                }
                break;
            case 2:
                for(int o = 0; o <= i; o++){
                    printf("Nome: %s\n", alunoss[o].nome);
                    printf("Media: %.2f\n", alunoss[o].med);
                }
                break;
            case 3:
                printf("A media do aluno %s eh : %f", alunoss[i].nome, alunoss[i].med);
                printf("\nMatricula: %i\n", alunoss[i].mat);
                break;
            default:
                printf("codigo invalido !");
        }
        printf("\n\n\n==========MENU==================\n\n\n");
        i++;
        printf("1 - Cadastro\n2 - Listar\n3 - Consultar\n4 - Xau\n\n===>");
        fflush(stdin);
        scanf("%i", &menu);
    }
    printf("Nome do aluno com maior media: %s\n", alunoss[indicemaior].nome);
    printf("Media do aluno com maior media: %.2f: ", alunoss[indicemaior].med);
    
    system("pause");
}