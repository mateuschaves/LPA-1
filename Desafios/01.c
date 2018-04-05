#include <stdio.h>
#include <stdlib.h>
/*
    Faça um programa que implemente uma máquina de calcular com operações +, -, *, /.
    Através da leitura de dois números reais e do operador do tipo caracter. Usando Switch
*/
int main(){
    float n1, n2, resultado;
    char operacao;
    int v = 0;
    do{
        printf("Informe o primeiro numero: ");
        v = scanf("%f", &n1);
    }while(v != 1);
    v = 0;
    fflush(stdin);
    do{
        printf("Informe a operacao:\n+ = Soma\n- = Subtracao\n* = Multiplicacao\n/ = Divisao\n>>> ");
        scanf(" %c", &operacao);
        if(operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/'){
            v++;
        }
    }while(v != 1);
    v = 0;
    do{
        printf("Informe o segundo numero: ");
        v = scanf("%f", &n2);
    }while(v != 1);
    switch(operacao){
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            resultado = n1 / n2;
            break;
        default:
            printf("ERRO - Opcao informada nao existe ! ");
            return 1;
    }
    printf("Resultado de %.2f %c %.2f = %.2f\n", n1, operacao, n2, resultado);
    system("pause");
}