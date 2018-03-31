#include <stdio.h>
#include <stdlib.h>
/*
2.	Em uma pesquisa no R.U. perguntou-se a cada aluno quantas refeições fez no mês anterior.
    Faça um programa que forneça:
        a) o número de alunos entrevistados;
        b) o número de alunos que fez menos de 10 refeições no mês;
        c) o número de alunos que fez entre 10 e 20 refeições;
        d) o número de alunos que fez mais de 20 refeições
*/
int main(){
    int alunos = 0, r1 = 0, r2 = 0, r3 = 0, menu, r, v = 0;
    do{
        do{
            printf("ALUNO: %i\n\n", alunos + 1);
            printf("Informe quantas refeicoes fez no mes passado: ");
            fflush(stdin);
            v = scanf("%i", &r);
        }while(v != 1);
        v = 0;
        if(r < 10){
            r1++;
        }else if(r>=10 && r<=20){
            r2++;
        }else if(r>20){
            r3++;
        }
        alunos++;
        do{
            printf("Digite:\n1) Para continuar\n0) Para sair\n>>>> ");
            fflush(stdin);
            scanf("%i", &menu);
            if(menu == 1 || menu == 0)
                v++;
        }while(v != 1);
        v = 0;
        system("cls");
    }while(menu != 0);
    printf("\nAlunos entrevistados: %i\n", alunos);
    printf("Alunos que fizeram menos de 10 refeicoes: %i\n", r1);
    printf("Alunos que fizeram entre 10 e 20 refeicoes: %i\n", r2);
    printf("Alunos que fizeram mais de 20 refeicoes: %i\n", r2);
    system("pause");
}
