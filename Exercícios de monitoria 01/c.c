#include <stdio.h>
/*
 *
 *  Aprimore seu programa testando se a média é maior que 7, exiba a seguinte mensagem
 *  “Parabéns você foi aprovado”. se não for exiba essa outra mensagem “Você não foi
 *  Aprovado”.
 *
 */

 int main(void) {

    float notas[] = {9.0, 3.0, 5.0};
    float soma, media;
    int i, tamanho;

    for(i = 0; i < sizeof(notas)/sizeof(int); i++){
      soma += notas[i];
    }

    tamanho = sizeof(notas)/sizeof(int);

    media = soma / tamanho;
    
    if( media > 7 ){
      printf("Media : %.2f.\nParabéns, você foi aprovado =)", media);
    }else{
      printf("Media : %.2f.\nVocê nâo foi aprovado =(", media);
    }

    printf("\nPressione qualquer tecla para sair do programa.");
    scanf("%c");

    return 0;
 }
