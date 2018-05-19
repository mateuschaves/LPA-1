#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    4.  Reaproveite o programa do exercício 3, adicione notas na estruturas e
        faça a média de notas dos 10 alunos
*/

void main(void){
    typedef struct{
            int day;
            int month;
            int year;
    } birthday;
    typedef struct{
            float n1;
            float n2;
            float average;
    } notes;
    typedef struct{
            char name[60];
            float height;
            int registry;
            birthday date;
            notes note;
    } students;
    students student[10];
    for(int i = 0; i < 2; i++){
        printf("Type student's name: ");
        fflush(stdin);
        gets(student[i].name);
        for(int o = 0; o < 2; o++){
            printf("Type your %i note: ", o+1);
            if(o == 0)
                scanf("%f", &student[i].note.n1);
            else
                scanf("%f", &student[i].note.n2);
        }
        student[i].note.average = (student[i].note.n1 + student[i].note.n2) / 2;
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
        printf("Average: %.2f\n", student[i].note.average);
        printf("Height: %.2f\n", student[i].height);
        printf("Registry: %i\n", student[i].registry);
        printf("Birthday: %i/%i/%i\n", student[i].date.day, student[i].date.month, student[i].date.year);
        printf("\n-------------------------\n");
    }
    system("pause");
}
