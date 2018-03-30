#include <stdio.h>
#include <stdlib.h>
/*
    6.	Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de 15 pessoas. 
        Faça um programa que calcule e mostre: 
            a) a maior e a menor altura do grupo; 
            b) a média de altura das mulheres; 
            c) o número de homens; 
            d) o sexo da pessoa mais alta.
*/
int main(){
    float altura, maior_altura = 0, menor_altura, media_altura_mulheres = 0;
    int quantidade_homens = 0, quantidade_mulheres = 0, i, c = 0;
    char sexo, sexo_mais_alto;
    for(i = 1; i <= 6; i++){
        printf("Informe o seu sexo: (M - Masculino, F- Feminino): ");
        scanf(" %c", &sexo);
        printf("informe a sua altura (Em metros): ");
        scanf("%f", &altura);
        if(c == 0){
            menor_altura = altura;
            c++;
        }
        switch(sexo){
            case 'F':
            case 'f':
                quantidade_mulheres++;
                media_altura_mulheres += altura;
                break;
            case 'M':
            case 'm':
                quantidade_homens++;
                break;
        }
        if(altura >= maior_altura){
            maior_altura = altura;
            sexo_mais_alto = sexo;
        }
        if(altura <= menor_altura){
            menor_altura = altura;
        }
    }
    media_altura_mulheres /= quantidade_mulheres; 
    printf("Maior altura do grupo: %.2f\n", maior_altura);
    printf("Menor altura do grupo: %.2f\n", menor_altura);
    printf("Media de altura das mulheres: %.2f\n", media_altura_mulheres);
    printf("O numero de homens: %d\n", quantidade_homens);
    printf("O sexo da pessoa mais alta: %c\n", sexo_mais_alto);
    system("pause");
}
