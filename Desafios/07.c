#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções.
float quadrado(float x);
float retangulo(float x, float y);
float triangulo(float base, float altura);
float trapezio(float base_menor, float base_maior, float altura);
int menu();

void main(void){
    // Variável que vai guardar a opção escolhida pelo usuário no menu.
    int escolha = 0, parada = 0;
    // Variáveis que vão guardar os valores das dimensões das figuras.
    float lado, base, altura, base_maior, base_menor, area;
    // Enquanto a escolha for diferente de 5 o loop continua.
    while(parada != 1){
        // Chamando a função que mostra o menu e guardando a opção digitada na variável escolha.
        int escolha = menu();
        printf("\nValor escolhido : %i\n", escolha);
        switch(escolha){
            case 1:
                printf("Informe o lado do quadrado: ");
                scanf("%f", &lado);
                // Chamando a função que calcula a área do quadrado e guardando o resultado na variável area.
                area = quadrado(lado);
                printf("Area: %.2f\n", area);
                break;
            case 2:
                printf("Informe o valor da base: ");
                scanf("%f", &base);
                printf("Informe o valor da altura: ");
                scanf("%f", &altura);
                // Chamando a função que calcula a área de um triângulo e guardando o resultado na variável area.
                area = triangulo(base, altura);
                printf("Area: %.2f\n", area);
                break;
            case 3:
                printf("Informe o valor da base: ");
                scanf("%f", &base);
                printf("Informe o valor da altura: ");
                scanf("%f", &altura);
                // Chamando a função que calcula a área de um retângulo e guardando o resultado na variável area.
                area = retangulo(base, altura);
                printf("Area: %.2f\n", area);
                break;
            case 4:
                printf("Informe o valor da base maior: ");
                scanf("%f", &base_maior);
                printf("Informe o valor da base menor: ");
                scanf("%f", &base_menor);
                printf("Informe o valor da altura: ");
                scanf("%f", &altura);
                // Chamando a função que calcula a área de um trapézio e guardando o resultado na variável area.
                area = trapezio(base_menor, base_maior, altura);
                printf("Area: %.2f\n", area);
                break;
            case 5:
                parada = 1;
                break;
            default:
                printf("\nERRO\n");
        }
    }
    system("pause");    
}

// Calcula a área de um quadrado.
float quadrado(float x){
    return x * x;
}

// Calcula a área de um retângulo.
float retangulo(float x, float y){
    return x * y;
}

// Calcula a área de um triangulo.
float triangulo(float base, float altura){
    return (base * altura)  / 2;
}

// Calcula a área de um trapezio.
float trapezio(float base_menor, float base_maior, float altura){
    return (base_maior + base_menor) * altura / 2;
}

// Mostra o menu.
int menu(void){

    // Variável que vai guardar a escolha do usuário
    int menu;
    printf("1 - Quadrado\n2 - Triangulo\n3 - Retangulo\n4 - Trapezio\n 5 - Sair\n >>>>>>> ");
    scanf("%i", &menu);

    // Retornando a escolha do usuário.
    return menu;
}