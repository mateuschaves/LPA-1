#include <stdio.h>

int main(){
    float preco_combustivel = 1.9;
    float km_inicio, km_fim, km_rodados, combustivel_gasto, total_recebido, media_consumo, lucro, custo;

    printf("Informe a marcacao do odometro no inicio do dia: ");
    scanf("%f", &km_inicio);
    printf("Informe a marcacao do odometro no final do dia: ");
    scanf("%f", &km_fim);
    printf("Informe a quantidade de combustivel gasto no dia: ");
    scanf("%f", &combustivel_gasto);
    printf("Informe o total recebido dos passageiros: ");
    scanf("%f", &total_recebido);
    km_rodados = km_fim - km_inicio;
    media_consumo = km_rodados / combustivel_gasto;
    custo = combustivel_gasto*preco_combustivel;
    lucro = total_recebido - custo;
    printf("O lucro do dia foi : %.2f", lucro);
    printf("\nVoce gastou R$ %.2f em gasolina", custo);
    printf("\nA media de consumo foi de: %.2f km/l ", media_consumo); 
    printf("\nPressione qualquer tecla para sair do programa...");
    scanf("%f", &total_recebido);
}