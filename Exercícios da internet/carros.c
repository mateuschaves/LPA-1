#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade, op;
    float money;

    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    if(idade < 18){
        printf("Voce nao pode comprar um carro sendo menor de idade.\n");
        system("pause");
        return 1;
    }
    printf("Informe a quantia disponivel para a compra: ");
    scanf("%f", &money);
    printf("Informe o carro desejado: \n");
    printf("1 - BMW (R$1000)\n");
    printf("2 - Mercedes (R$2000)\n");
    printf("3 - Ferrari (R$3000)\n");
    printf("4 - Desistir\n");
    scanf("%i", &op);
    switch(op){
        case 1:
           if(money >= 1000){
               printf("Compra realizada com sucesso !");
           }else{
               printf("Seu dinheiro eh insuficiente !");
           }
            break;
        case 2:
           if(money >= 2000){
               printf("Compra realizada com sucesso !");
           }else{
               printf("Seu dinheiro eh insuficiente !");
           }
           break;
        case 3:
            if(money >= 3000){
               printf("Compra realizada com sucesso !");
           }else{
               printf("Seu dinheiro eh insuficiente !");
           }
           break;
        case 4:
            printf("Voce desistiu da compra !");
            break;
        default:
            printf("Essa opcao nao existe !");
    }
    printf("\n");
    system("pause");
}