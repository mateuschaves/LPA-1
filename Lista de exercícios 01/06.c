#include <stdio.h>

/*
6.	Calcular o valor da conta de energia elétrica de um consumidor,
    sendo informados: a leitura anterior(LANT), leitura atual(LATU)
    e valor por unidade consumida(V). Formula: CONT = (LANT - LATU)*V
*/
void pause(void);
float normalize(float cont);
float lant, latu, v, cont;

int main(){
    printf("Informe a leitura anterior: ");
    scanf("%f", &lant);
    printf("Informe a leitura atual: ");
    scanf("%f", &latu);
    if(lant > latu){
        printf("A leitura atual nao pode ser menor que a leitura anterior.");
        pause();
        return 1;
    }
    printf("Informe o valor por unidade consumida: ");
    scanf("%f", &v);
    cont = (lant - latu)*v;
    if(cont < 0 ){
      cont =  normalize(cont);
    }
    printf("O valor da conta de energia eletrica eh de : %f", cont);
    pause();
}

void pause(void){
    printf("\nPressione qualquer tecla para sair do programa.");
    scanf("%f", &cont);
}

float normalize(float cont){
    cont *= -1;
    return cont;
}