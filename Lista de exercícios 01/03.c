#include <stdio.h>
/*
    3.	Uma loja XXXX o preço de um produto teve um desconto,
        ambos serão fornecidos pelo funcionário da loja XXXX.
        Calcular e exibir o valor do desconto  e  o  valor do
        final do produto com desconto. 
*/
int main(){
    float valor, desconto, valor_final;
    printf("Digite o valor do produto : ");
    scanf("%f", &valor);
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);
    desconto = desconto / 100;
    valor_final = valor - (valor*desconto);
    printf("O valor final do produto eh de : %.2f", valor_final);
    printf("\nO desconto foi de : %.2f %%", desconto*100);
    printf("\nPressione qualquer tecla para sair do programa.");
    scanf("%f", &desconto);
}