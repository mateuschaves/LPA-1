#include <stdio.h>
#define VETOR 100
int main(){
  int v_1[VETOR], v_2[VETOR], p[VETOR], n, i, pe=0;
  printf("Informe o tamanho do vetor: ");
  scanf("%i", &n);
  for(i = 0; i < n; i++){
      printf("Informe o valor do v_1[%i]: ", i);
      scanf("%i", &v_1[i]);
  }
  printf("Informe os valores para o segundo vetor \n\n");
  for(i = 0; i < n; i++){
      printf("Informe o valor do v_2[%i]: ", i);
      scanf("%i", &v_2[i]);
  }
  for(i = 0; i < n; i++){
      p[i] = v_1[i]*v_2[i];
  }
  for(i = 0; i < n; i++){
      pe += p[i];
  }
  printf("Produto escalar: %i", pe);
  return 0;
}
