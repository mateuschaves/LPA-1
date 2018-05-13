#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    O código de César é uma das mais simples e conhecidas técnicas de criptografia. É
    um tipo de substituição na qual cada letra do texto é substituıda por outra, que se
    apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma
    troca de três posições, A seria substituıdo por D, B se tornaria E, e assim por diante.
    Implemente um programa que faça uso desse Código de César (3 posições), entre com
    uma string e retorne a string codificada.
*/
void main(void){
    char string[1024];
    printf("Informe a frase: ");
    gets(string);
    for(int i = 0; i < strlen(string); i++){
        if(string[i] >= 'x'){
            string[i] -= 26;
        }
        if(string[i] == ' '){
            string[i] = string[i];
        }else{
            string[i] += 3;
        }
    }
    printf("Frase criptografada: ");
    puts(string);
    system("pause");
}