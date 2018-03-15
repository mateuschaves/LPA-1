#include <stdio.h>
#include <math.h>

/*
7.	Escreva um programa para calcular e imprimir o número de lâmpadas
    necessárias para iluminar um determinado cômodo de uma residência. 
    Dados de entrada: a potência da lâmpada utilizada (em watts),
    as dimensões (largura e comprimento, em metros) do cômodo.
    Considere que a potência necessária é de 18 watts por metro quadrado.
*/
int main(){
    float largura, comprimento, area, potencia;
    int potencia_metro_quadrado = 18;
    int lampadas;

    printf("Potencia da lampada utilizada: ");
    scanf("%f", &potencia);
    printf("Largura do comodo: ");
    scanf("%f", &largura);
    printf("Comprimento do comodo: ");
    scanf("%f", &comprimento);
    area = largura*comprimento;
    lampadas = ceil((area*potencia_metro_quadrado) / potencia);
    if(lampadas > 1){
        printf("Voce precisa de %i lampadas", lampadas);
    }else{
        printf("você precisa de %i lampada", lampadas);
    }
    scanf("%i", &lampadas);
}
