#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    1. Crie um programa que cadastre nome, idade ,sexo (M ou F) em uma
    estrutura pessoa e leia esses valores e exiba esses dados depois.
*/
void main(void){
    typedef struct{
        char name[60], gender;
        int age;
    } people ;
    people person;
    printf("Type your name: ");
    gets(person.name);
    printf("Type yout gender: ");
    scanf("%c", &person.gender);
    printf("Type your age: ");
    scanf("%i", &person.age);
    printf("Hi, %s\n", person.name);
    printf("Age: %i\n", person.age);
    printf("Gender choice: %c\n", person.gender);
    system("pause");
}