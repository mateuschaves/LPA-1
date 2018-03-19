#include <stdio.h>
#include <stdlib.h>
/*
    2.	Faça um programa que receba a idade de um nadador e mostre a sua categoria
        usando as regras a seguir:
        a. Infantil de 5 a 7;
        b. Juvenil de 8 a 10;
        c. Adolescente de 11 a 15;
        d. Adulto de 16 a 30;
        e. Sênior acima de 30.
*/
int main(){
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%i", &idade);
    if(idade >= 5 && idade <=7){
        printf("Sua categoria eh infantil.\n");
    }else if(idade >= 8 && idade <=10){
        printf("Sua categoria eh Juvenil.\n");
    }else if(idade >= 11 && idade <=15){
        printf("Sua categoria eh Adolescente.\n");
    }else if(idade >= 16 && idade <= 30){
        printf("Sua categoria eh Adulto.\n");
    }else if(idade > 30){
        printf("Sua categoria eh Senior.\n");
    }else{
        printf("O nadador precisa ter no minimo 5 anos.\n");
    }
    system("pause");
}