#include <stdio.h>
#include <stdlib.h>
int main(){
    // Declarando as variáveis.
    float altura, peso, imc;
    printf("Informe o seu peso: ");
    // Lendo o peso.
    scanf("%f", &peso);
    printf("Informe a sua altura: ");
    // Lendo a altura.
    scanf("%f", &altura);
    // Calculando o imc.
    imc = peso / (altura*altura);
    // Verificando se o imc é menor que 18.5
    if(imc < 18.5){
        printf("Abaixo do peso !\nIMC: %.2f\n", imc);
    // Verificando se o imc está entre 18.5 e 24.9
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Normal !\nIMC: %.2f\n", imc);
    // Verificando se o imc está entre 24.9 e 29.9
    }else if(imc > 24.9 && imc < 29.9){
        printf("Acima do peso\nIMC: %.2f\n", imc);
    // imc é maior que 29.9
    }else{
        printf("Obeso\nIMC: %.2f\n", imc);
    }
    system("pause");
    return 0;
}