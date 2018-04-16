#include <stdio.h>
#include <stdlib.h>
// Exibir a multiplicação de dois números reais informados pelo usuário.
int main(){
    float n1, n2;
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo numero: ");
    scanf("%f", &n2);
    printf("%.2f x %.2f = %.2f\n", n1, n2, n1*n2);
    system("pause");
}