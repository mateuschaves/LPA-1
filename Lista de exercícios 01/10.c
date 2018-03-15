#include <stdio.h>
/*
    10.	Um investidor está preocupado com o cambio
    do dólar e necessita de um programa que o auxilie
    a calcular a variação cambial entre dois dias consecutivos.
    Implemente um programa que solicite dois valores de dólar 
    (preço) e informe a diferença absoluta e a diferença relativa entre eles.
    dif_absoluta = val_ontem - val_hoje
    dif_relativa = (dif_absoluta * 100) / val_ontem

*/
int main(){
    float dolar_hoje, dolar_ontem, dif_absoluta, dif_relativa;
    printf("Informe o valor do dolar no dia anterior: ");
    scanf("%f", &dolar_ontem);
    if(dolar_ontem == 0){
        printf("Dolar do dia anterior precisa ser diferente de 0");
        return 1;
    }
    printf("Informe o valor do dolar hoje: ");
    scanf("%f", &dolar_hoje);
    dif_absoluta = dolar_ontem - dolar_hoje;
    dif_relativa = (dif_absoluta*100) / dolar_ontem;
    printf("\nDiferenca absoluta: %f", dif_absoluta);
    printf("\nDiferenca relativa: %f", dif_relativa);
    printf("\nPressione qualquer tecla para sair do programa.");
    scanf("%f", &dolar_hoje);
}