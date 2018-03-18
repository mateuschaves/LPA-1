#include <stdio.h>
#include <stdlib.h>
/*
    6.	Escreva um programa para ler 3 valores e escrever a soma dos 2 maiores.
        Considere que o usuário não informará valores iguais.
*/
int main(){
    float valores[3] = {0,0,0}, soma = 0, maior = 0;
    float maiores[2] = {0,0};
    int tamanho_valores = sizeof(valores)/sizeof(int), i = 0, l = 1, c = 0, index = 0;
    int tamanho_maiores = sizeof(maiores)/sizeof(int);
    for(; i < tamanho_valores; i++){
        printf("Informe o %i valor: ", l);
        scanf("%f", &valores[i]);
        l++;
    }
    i = 0;
    for(; c < 2; c++){
        for(; i < 3; i++){
            if(valores[i] > maior){
                maior = valores[i];
                index = i;
            }
        }
        valores[index] = 0;
        maiores[c] = maior;
        maior = 0;
        i = 0;
    } 
    soma = maiores[0] + maiores[1];
    printf("A soma dos 2 maiores numeros eh: %f \n", soma);
    system("PAUSE");
}