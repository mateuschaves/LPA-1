#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    2.  Crie um looping para preencher as 5 estruturas de pessoas criadas no
        exemplo passado.e leia esses valores e exiba esses dados depois.
*/
void main(void){
    typedef struct {
        char name[60], gender;
        int age;
    } people;
    people person[5];
    for(int i = 0; i < 2; i++){
        printf("Type your name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Type your gender: ");
        fflush(stdin);
        scanf("%c", &person[i].gender);
        printf("Type your age: ");
        fflush(stdin);
        scanf("%i", &person[i].age);
    }
    for(int i = 0; i < 2; i++){
        printf("\n--------\n");
        printf("Name: %s\n", person[i].name);
        printf("Gender: %c\n", person[i].gender);
        printf("Age: %i\n", person[i].age);
    }
    system("pause");
}