#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    3.  Crie um programa que permita armazenar o nome, a altura e da data
        de nascimento,matrícula de até 10 alunos. Cada aluno deve ser
        representada por uma struct​. A data de nascimento dentro da struct
        aluno​, também deve ser uma struct​.
*/

void main(void){
    typedef struct{
            int day;
            int month;
            int year;
    } birthday;
    typedef struct{
            char name[60];
            float height;
            int registry;
            birthday date;
    } students;
    students student[10];
    for(int i = 0; i < 2; i++){
        printf("Type student's name: ");
        fflush(stdin);
        gets(student[i].name);
        printf("Type student's height: ");
        fflush(stdin);
        scanf("%f", &student[i].height);
        printf("Type the student's registry: ");
        fflush(stdin);
        scanf("%i", &student[i].registry);
        printf("Type the student's birth day: ");
        fflush(stdin);
        scanf("%i", &student[i].date.day);
        printf("Type the student's birth month: ");
        fflush(stdin);
        scanf("%i", &student[i].date.month);
        printf("Type the student's birth year: ");
        fflush(stdin);
        scanf("%i", &student[i].date.year);
        system("cls");
    }
    for(int i = 0; i < 2; i++){
        printf("\n-------------------------\n");
        printf("Name: %s\n", student[i].name);
        printf("Height: %.2f\n", student[i].height);
        printf("Registry: %i\n", student[i].registry);
        printf("Birthday: %i/%i/%i\n", student[i].date.day, student[i].date.month, student[i].date.year);
        printf("\n-------------------------\n");
    }
    system("pause");
}
