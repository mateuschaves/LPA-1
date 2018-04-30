#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
  8.	Ler um vetor C de 10 nomes de pessoas, após pedir que o usuário digite um  nome qualquer de pessoa.
      Escrever a mensagem ACHEI, se o nome estiver armazenado no vetor C ou NÃO ACHEI caso contrário.
*/

void main(void){
    char nomes[10][60], nome[60];
    int i, c = 0;
    for(i = 0; i < 10; i++){
        printf("Informe o %i nome:  ", i+1);
        fflush(stdin);
        scanf(" %s", &nome);
        strcpy(nomes[i], nome);
    }
    printf("Informe o nome que deseja procurar: ");
    scanf(" %s", &nome);
    i = 0;
    while(  i < 10  ){
      if(strcmp(nomes[i], nome) == 0){
          c++;
          break;
      }
      i++;
    }
    if(c > 0){
      printf("ACHEI !\n");
    }else{
      printf("NÃO ACHEI !\n");
    }
    system("pause");
}
