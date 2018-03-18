#include <stdio.h>
#include <stdlib.h>

/* 
3.	As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia,
    e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que
    leia o número de maçãs compradas, calcule e escreva o valor total da compra.
*/

int main(){
    int qtd_macas;
    float preco;
    printf("Informe a quantidade de macas compradas: ");
    scanf("%i", &qtd_macas);
    if(qtd_macas < 12){
        preco = qtd_macas*0.30;
    }else{
        preco = qtd_macas*0.25;
    }
    printf("O preco todal da compra eh de: %.2f \n", preco);
    system("PAUSE");
}
