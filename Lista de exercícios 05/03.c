#include <stdio.h>
#include <stdlib.h>
/*
3.	Um total de 500 alunos de uma  universidade   foram  entrevistados.
    De   cada   um  deles   foram  colhidas as seguintes informações:
    o código do curso que freqüenta (1-engenharia; 2-computação; 3- administração)
    e a idade. Faça um programa que processe estes dados e que forneça as seguintes informações:

        a) número de alunos por curso;
        b) número de alunos com idade entre 20 e 25 anos, por curso;
        c) qual o curso com menor média de idade.
*/
int main(){
    float mi_eng =0, mi_com = 0, mi_adm = 0;
    int adm = 0, eng = 0, com = 0, i_adm = 0, i_eng = 0, i_com = 0 , menu, i = 1, curso, idade, v = 0;
    do{
        printf("ALUNO: %i\n", i);
        v = 0;
        do{
            printf("Informe o seu curso: (1 - Engenharia, 2- Computacao, 3 - Administracao): ");
            scanf("%i", &curso);
            switch(curso){
                case 1:
                    eng++;
                    v++;
                    break;
                case 2:
                    com++;
                    v++;
                    break;
                case 3:
                    adm++;
                    v++;
                    break;
                default:
                    printf("ERRO - Curso informado nao existe !");
            }
        }while(v != 1);
        v = 0;
        do{
            printf("Informe sua idade: ");
            v = scanf("%i", &idade);
        }while(v != 1);
        v = 0;
        if(idade >= 20 && idade <= 25){
                switch(curso){
                    case 1:
                        i_eng++;
                        break;
                    case 2:
                        i_com++;
                        break;
                    case 3:
                        i_adm++;
                        break;
                }
            }
        switch(curso){
            case 1:
                mi_eng += idade;
                break;
            case 2:
                mi_com += idade;
                break;
            case 3:
                mi_adm += idade;
                break;
        }
        v = 0;
        do{
            printf("Digite: \n1) Para continuar.\n0) Para sair.\n>>>> ");
            v = scanf("%i", &menu);
        }while(v != 1);
        i++;
    }while(menu != 0);
    mi_eng /= (float) eng;
    mi_com /= (float) com;
    mi_adm /= (float) adm;
    if(mi_eng <= mi_com){
        if(mi_eng < mi_adm){
            printf("\nCurso com menor media de idade: Engenharia. Media: %f \n", mi_eng);
        }else{
            printf("\nCurso com menor media de idade: Administracao. Media: %f \n", mi_adm);
        }
    }else if(mi_eng <= mi_adm){
        if(mi_eng < mi_com){
            printf("\nCurso com menor media de idade: Engenharia. Media: %f \n", mi_eng);
        }else{
            printf("\nCurso com menor media de idade: Computacao. Media: %f \n", mi_com);
        }
    }else if(mi_adm <= mi_eng){
        if(mi_adm < mi_com){
            printf("\nCurso com menor media de idade: Administracao. Media: %f \n", mi_adm);
        }else{
            printf("\nCurso com menor media de idade: Computacao. Media: %f \n", mi_com);
        }
    }else if(mi_adm <= mi_com){
        if(mi_adm < mi_eng){
            printf("\nCurso com menor media de idade: Administracao. Media: %f \n", mi_adm);
        }else{
            printf("\nCurso com menor media de idade: Engenharia. Media:  %f \n", mi_eng);
        }
    }else if(mi_com <= mi_eng){
        if(mi_com < mi_adm){
            printf("\nCurso com menor media de idade: Computacao. Media: %f \n", mi_com);
        }else{
            printf("\nCurso com menor media de idade: Administracao. Media: %f \n", mi_adm);
        }
    }else if(mi_com <= mi_adm){
        if(mi_com < mi_eng){
            printf("\nCurso com menor media de idade: Computacao. Media: %f \n", mi_com);
        }else{
            printf("\nCurso com menor media de idade: Engenharia. Media: %f \n", mi_eng);
        }
    }
    printf("%i alunos no curso de computacao, sendo %i entre 20 a 25 anos.\n", com, i_com);
    printf("%i alunos no curso de engenharia, sendo %i entre 20 a 25 anos\n", eng, i_eng);
    printf("%i alunos no curso de administracao, sendo %i entre 20 a 25 anos\n", adm, i_adm);
    system("pause");
}