#include <stdio.h>
/*
    8.	Escreva um programa para ler as dimensões de uma cozinha retangular
        (comprimento, largura e altura), calcular e escrever a quantidade de
        caixas de azulejos para se colocar em todas as suas paredes (considere
        que não será descontada a área ocupada por portas e janelas). Cada caixa
        de azulejos possui 1,5 m2.
*/

int main(){
    float comprimento, largura, altura, area;
    float caixa_azulejos = 1.5;
    float azulejos;
    int azulejos_int;
    printf("Informe o comprimento da cozinha: ");
    scanf("%f", &comprimento);
    printf("Informe a largura da cozinha: ");
    scanf("%f", &largura);
    printf("Informe a altura da cozinha: ");
    scanf("%f", &altura);
    area = (comprimento * altura * 2) + (largura * altura * 2);
    azulejos = area / caixa_azulejos;
    azulejos_int = azulejos;
    if(azulejos > azulejos_int){
    	azulejos = azulejos_int + 1;
	}
    if(azulejos > 1){
        printf("Voce precisara de %.0f caixa de azulejos", azulejos);
    }else{
        printf("Voce precisara de %.0f caixa de azulejo", azulejos);
    }
    printf("\nPressione qualquer tecla para sair do programa...");
    scanf("%f", caixa_azulejos);
}
