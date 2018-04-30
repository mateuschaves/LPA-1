#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
  10.	Ler um vetor de N Elementos. Considere o vetor de nomes.
      Exiba esse vetor com os nomes em ordem alfabética.
*/
void main(void) {
  int i = 0, n;
  printf("Informe a quantidade de nomes: ");
  scanf("%i", &n);
  char nomes[n][60], nome[60], aux[60];
  for(; i < n; i++){
    printf("Informe o nome %i: ", i+1);
    fflush(stdin);
    scanf("%[^\n]s", &nome);
    strcpy(nomes[i], nome);
  }
  for(i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
        if( strcmp(nomes[j], nomes[i]) < 0 ){
            strcpy(aux,nomes[i]);
            strcpy(nomes[i],nomes[j]);
            strcpy(nomes[j],aux);
        }
    }
  }
  printf("\n\n --- NOMES EM ORDEM ALFABETICA ----\n\n");
  for(i = 0; i < n; i++){
    printf("%i. %s\n\n",i+1, nomes[i]);
  }
  system("pause");
}
