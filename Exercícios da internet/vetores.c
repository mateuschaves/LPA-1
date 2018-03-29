#include <stdio.h>
#include <stdlib.h>

int main(){
    int p=0, i, n, tamanho, vo=0, v;
    char operacao;
    do{
        printf("Informe o tamanho do vetor 1: ");
        fflush(stdin);
        v = scanf(" %d", &n);
    }while(v != 1);
    float *v1 = (float *)malloc(n * sizeof(float));
    float *v2 = (float *)malloc(n * sizeof(float));
    float *r  = (float *)malloc(n * sizeof(float));
    for(i = 0; i < n; i++){
        v=0;
        do{
            printf("Informe o valor da posicao %d do vetor 1: ", p);
            fflush(stdin);
            v = scanf(" %f", &v1[i]);
        }while(v != 1);
        p++;
    }
    do{
        printf("\nInforme a operacao que deseja realizar '+', '-', '*': ");
        scanf(" %c", &operacao);
        if(operacao == '-' || operacao == '*' || operacao =='+'){
            vo++;
        }
    }while(vo != 1);
    p = 0;
    printf("\nO vetor 2 tera %d posicoes, como o primeiro.\n\n", n);
    for(i = 0; i < n; i++){
        v = 0;
        do{
            printf("Informe o valor da posicao %d do vetor 2: ", p);
            fflush(stdin);
            v = scanf(" %f", &v2[i]);
        }while( v != 1);
        p++;
    }
    if(operacao == '+'){
        for(i = 0; i < n; i++){
            r[i] = v1[i]+v2[i];
        }
    }else if(operacao == '-'){
        for(i = 0; i < n; i++){
            r[i] = v1[i]-v2[i];
        }
    }else if(operacao == '*'){
        for(i = 0; i < n; i++){
            r[i] = v1[i]*v2[i];
        }
    }
    printf("\n\n===== Calculando ======\n");
    printf("<");
    for(i = 0; i < n; i++){
        if(i == (n-1)){
            printf("%.2f", v1[i]);
        }else{
            printf("%.2f, ", v1[i]);
        }
    }
    printf(">");
    printf(" %c ", operacao);
    printf("<");
    for(i = 0; i < n; i++){
        if(i == (n-1)){
            printf("%.2f", v2[i]);
        }else{
            printf("%.2f, ", v2[i]);
        }
    }
    printf(">\n");
    printf("\n\n===== Resultado ======\n");
    printf("<");
    for(i = 0; i < n; i++){
        if(i == (n-1)){
            printf("%.2f", r[i]);
        }else{
            printf("%.2f, ", r[i]);
        }
    }
    printf(">\n");
    system("pause");
}