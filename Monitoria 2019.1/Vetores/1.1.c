#include <stdio.h>

// 1 - Leia um vetor contendo 10 números, que correspondem a matrículas de
// alunos. Após isso ler uma matrícula e imprima uma mensagem informando se
// está ou não presente no vetor, caso o número esteja, mostre a posição onde foi
// encontrado o número

int main(void){
    int matriculas[10], matricula, presente = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite uma matricula: ");
        scanf("%d", &matriculas[i]);
    }

    printf("Qual matricula deseja procurar ? ");
    scanf("%d", &matricula);

    for(int i = 0; i < 10; i++){
        if(matricula == matriculas[i]){
            printf("Matricula encontrada na posicao %d !\n", i);
            presente = 1;
        }
    }

    if(!presente)
        printf("Matricula nao encontrada =( \n");
}