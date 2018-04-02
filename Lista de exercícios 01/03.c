#include <stdio.h>
#include <stdlib.h>
/*
    3.	Uma loja XXXX o preço de um produto teve um desconto,
        ambos serão fornecidos pelo funcionário da loja XXXX.
        Calcular e exibir o valor do desconto  e  o  valor do
        final do produto com desconto. 
*/
int main(){
    // Declarando as variáveis
    float valor, desconto, valor_final;
    printf("Digite o valor do produto : ");
    // Lendo o valor do usuário
    scanf("%f", &valor);
    printf("Digite o valor do desconto: ");
    // Lendo o valor do desconto ex. ( 40 = 40%)
    scanf("%f", &desconto);
    desconto = desconto / 100;
    // Subtraindo o desconto do valor informado
    valor_final = valor - (valor*desconto);
    // Mostrando o valor final
    printf("O valor final do produto eh de : %.2f", valor_final);
    // Mostrando o valor do desconto
    printf("\nO desconto foi de : %.2f %%\n", desconto*100);
    system("pause");
}