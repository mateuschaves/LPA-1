#include <stdio.h>
#include <stdlib.h>
/*
    5.	Faça um  programa  (Laço  For)  que  receba  duas  notas  de  seis  alunos,  calcule  e 
        mostre  a média  aritmética  das  duas  notas  de  cada  aluno;  a mensagem  referente  a 
        média: até 3,0 reprovado; entre 3,0 e 7,0 exame e acima de 7,0 aprovado.
*/
int main(){
    float notas[6][2], soma, media;
    int i = 0, l = 1, j = 0;
    for(; i < 6; i++){
        for(; j < 2; j++){
            switch(j){
                case 0:
                    printf("Informe a primeira nota do aluno %i: ", l);
                    break;
                case 1:
                    printf("Informe a segunda nota do aluno %i: ", l);
                    break;
            }
            scanf("%f", &notas[i][j]);
        }
        l++;
        j=0;
    }
    i=0;
    j=0;
    l=1;
    system("cls");
    for(; i < 6; i++){
        for(; j < 2; j++){
            soma += notas[i][j];
        }
        media = soma/2;
        if(media <= 3){
            printf("Aluno %i Reprovado, media : %f\n",l,media);
        }else if(media > 3 && media <= 7){
            printf("Aluno %i em Recuperacao, media : %f\n",l,media);
        }else{
            printf("Aluno %i Aprovado, media : %f\n",l,media);
        }
        j=0;
        soma=0;
        media=0;
        l++;
    }
    system("pause");
}

