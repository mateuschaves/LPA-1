#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
7.	Escreva um programa para calcular e imprimir o número de lâmpadas
    necessárias para iluminar um determinado cômodo de uma residência. 
    Dados de entrada: a potência da lâmpada utilizada (em watts),
    as dimensões (largura e comprimento, em metros) do cômodo.
    Considere que a potência necessária é de 18 watts por metro quadrado.
*/
int main(){
    // Declarando as variáveis
    float largura, comprimento, area, potencia;
    int potencia_metro_quadrado = 18;
    int lampadas;
    printf("Potencia da lampada utilizada: ");
    // Lendo o valor do usuário
    scanf("%f", &potencia);
    printf("Largura do comodo: ");
    // Lendo o valor do usuário
    scanf("%f", &largura);
    printf("Comprimento do comodo: ");
    // Lendo o valor do usuário
    scanf("%f", &comprimento);
    // Calculando a área
    area = largura*comprimento;
    // Calculando quantas lâmpadas são necessárias
    lampadas = ceil((area*potencia_metro_quadrado) / potencia);
    if(lampadas > 1){
        printf("Voce precisa de %i lampadas\n", lampadas);
    }else{
        printf("você precisa de %i lampada\n", lampadas);
    }
    system("pause");
}
