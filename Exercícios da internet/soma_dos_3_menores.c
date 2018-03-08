#include <stdio.h>

// Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.
int main(){

    int n[4] = {0,0,0,0};
    int m[3] = {0,0,0};
    int i, maior, menor, diferenca = 0;
    int soma = 0;
    int o = 1;
    int bye = 1;
    int index;
    int l;
    for(i = 0; i < 4; i++){
        printf("Informe o %i numero: ", o);
        scanf("%i", &n[i]);
        o++; 
    }
    for(i = 0; i < 4; i++){
        if(maior < n[i]){
            maior = n[i];
        }
    }
    for(l = 0; l < 3; l++){
        for(i = 0; i < 4; i++){
                if(diferenca < (maior - n[i])){
                    menor = n[i];
                    diferenca = maior - n[i];
                    index = i;
                }
            }
        diferenca = 0;
        m[l] = menor;
        n[index] = maior;
    }
    for(i = 0; i < 3; i++){
        soma += m[i];
    }
    printf("Soma : %i ", soma);
    scanf("%i", &bye);
}
