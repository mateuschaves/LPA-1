#include <stdio.h>
#define MAX 100
int main(void) {
  int i, n, v[100];
  printf("Informe o tamanho da sequencia: ");
  scanf("%i", &n);
  for(i = 0; i < n; i++){
    printf("Informe o valor de v[%i]", i);
    scanf("%i", &v[i]);
  }
  i--;
  for(; i >= 0; i--){
    printf("%i\n", v[i]);
  }
}
