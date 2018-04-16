#include <stdio.h>
#include <stdlib.h>
// Ler um número inteiro e exiba seu dobro.
int main(void) {
  int n;
  printf("Informe um numero: ");
  scanf("%i", &n);
  printf("O dobro de %i eh %i\n", n, n*2);
  system("pause");
  return 0;
}
