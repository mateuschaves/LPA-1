#include <stdio.h>
#include <stdlib.h>
/*
    5.	Calcular o consumo médio do veículo, sendo informados a distância percorrida(D)
        e o número de litros consumidos (LIT). Formula: (CM = D/LIT).
*/
int main(){
    // Declarando as variáveis
    float distancia, litros, media;
    printf("Informe a distancia percorrida : ");
    // Lendo o valor do usuário
    scanf("%f", &distancia);
    printf("Informe a quantidade de litros consumidos: ");
    // Lendo o valor do usuário
    scanf("%f", &litros);
    // Calculando o consumo médio do veículo
    media = distancia/litros;
    // Mostrando a media de consumo do veículo
    printf("O consumo medio do veiculo eh de : %.2f\n", media);
    system("pause");
}