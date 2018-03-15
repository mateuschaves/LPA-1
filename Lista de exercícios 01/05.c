#include <stdio.h>
/*
    5.	Calcular o consumo médio do veículo, sendo informados a distância percorrida(D)
        e o número de litros consumidos (LIT). Formula: (CM = D/LIT).
*/
int main(){
    float distancia, litros, media;
    printf("Informe a distancia percorrida : ");
    scanf("%f", &distancia);
    printf("Informe a quantidade de litros consumidos: ");
    scanf("%f", &litros);
    media = distancia/litros;
    printf("O consumo medio do veiculo eh de : %.2f", media);
    printf("\nPressione qualquer tecla para sair do programa.");
    scanf("%f", &litros);
}