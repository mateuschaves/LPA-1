#include <stdio.h>
#include <stdlib.h>
/*
6.	Calcular o valor da conta de energia elétrica de um consumidor,
    sendo informados: a leitura anterior(LANT), leitura atual(LATU)
    e valor por unidade consumida(V). Formula: CONT = (LANT - LATU)*V
*/
// Funções utilizados
void pause(void);
float normalize(float cont);
// Declarando as variáveis
float lant, latu, v, cont;
int main(){
    printf("Informe a leitura anterior: ");
    // Lendo o valor do usuário
    scanf("%f", &lant);
    printf("Informe a leitura atual: ");
    // Lendo o valor do usuário
    scanf("%f", &latu);
    // Verificando se a leitura atual é menor que a leitura anterior
    if(lant > latu){
        printf("A leitura atual nao pode ser menor que a leitura anterior.");
        return 1;
    }
    printf("Informe o valor por unidade consumida: ");
    // Lendo o valor do usuário
    scanf("%f", &v);
    // Calculando o valor da conta de energia
    cont = (lant - latu)*v;
    // Verificando se o resultado foi negativo ( Fórmula fornecida errada, talvez. )
    if(cont < 0 ){
      // Usando uma função para tornar o valor positivo.
      cont =  normalize(cont);
    }
    printf("O valor da conta de energia eletrica eh de : %f\n", cont);
    system("pause");
}
// Deixa um valor que é negativo postivo
float normalize(float cont){
    cont *= -1;
    return cont;
}