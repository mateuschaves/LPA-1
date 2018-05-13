#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
    Faça um programa que leia duas strings (de tamanho máximo 40). Após isso, o
    programa deve concatenar as informações lidas e mostrar o resultado para o usuário.
    Exemplo: Se a primeira string digitada for "Bom dia, " e a segunda "moçada !", então
    o resultado deverá ficar: "Bom dia, moçada !"
*/

void main(void){
   char first_string[40], second_string[40], final_string[80];
   
   printf("Informe a primeira frase: ");
   gets(first_string);
   printf("Informe a segunda frase: ");
   gets(second_string);
   strcat(final_string, first_string);
   strcat(final_string, ", ");
   strcat(final_string, second_string);
   puts(final_string);
   system("pause");
}