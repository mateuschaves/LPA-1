#include <stdlib.h>
#include <stdio.h>

/*
  9.	Ler um vetor W de 10 elementos, depois ler um valor V.
      Contar e escrever quantas vezes o valor V  ocorre no
      vetor W e escrever  também em que posições  (índices)
      do vetor W o valor V aparece. Caso o valor V não ocorra
      nenhuma vez no vetor W, escrever uma mensagem informando isto
*/

void main(void){
    int w[10], v, index[10], i = 0, c = 0;
    for(; i < 10; i++){
        printf("Informe o valor de w[%i]: ", i);
        scanf("%i", &w[i]);
    }
    printf("Informe o valor que deseja procurar: ");
    scanf("%i", &v);
    for(i = 0; i < 10; i++){
        if(v == w[i]){
            index[c] = i;
            c++;
        }
    }
    printf("\n\n\nValores informados\n\n\n");
    for(i = 0; i < 10; i++){
      printf("w[%i] = %i\n", i, w[i]);
    }
    printf("\n\nQuantidade de ocorrencias do valor informado: %i", c);
    if(c > 0){
      printf("\n\n\nIndices em que o valor informado aparece\n\n\n");
      for(i = 0; i < c; i++){
        printf("w[%i] = %i\n", i, index[i]);
      }
    }else{
      printf("\n\nO valor nao foi encontrado !");
    }
    printf("\n");
    system("pause");
}
