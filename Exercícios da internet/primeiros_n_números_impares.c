#include <stdio.h>

//Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
int count_array(int a[], int n);
int array_normalize(int a[], int n);
int main(){
    int n, c, bye, index = 0;
    int i = 1;
    printf("Informe um numero: ");
    scanf("%i", &n);
    int impares[n];
    array_normalize(impares, n);
    while(c != n){
        if(i % 2 != 0){
            printf("%i\n", i);
            impares[index] = i;
            index++;
        }
        i++;
        c = count_array(impares, n);
    }
    printf("\n Pressione qualquer tecla para fechar o programa.");
    scanf("%i", &bye);
    return 0;
}
int count_array(int a[], int n){
    int c = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            c++;
        }
    }
    return c;
}
int array_normalize(int a[], int n){
    for(int i = 0; i <= n; i++){
        a[i] = 0;
    }

    return 0;
}


