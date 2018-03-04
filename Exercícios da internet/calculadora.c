#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(){
  char op;
  float num1, num2, resultado;
  do {
      num1 = num2 = resultado = 0;

      printf(" (1) Somar\n");

      printf(" (2) Subtrair\n");

      printf(" (3) Multiplicar\n");

      printf(" (4) Dividir\n");

      printf(" (0) Sair\n");

      printf("Informe a operacao: \n");

      op = getche();

      switch (op) {
        case '1':
          printf("\n A operacao escolhida foi : Soma");
          break;
        case '2':
          printf("\n A operacao escolhida foi : Subtracao");
          break;
        case '3':
          printf("\n A operacao escolhida foi : Multiplicacao");
          break;
        case '4':
          printf("\n A operacao escolhida foi : Divisao");
      }

      printf("\n");

      if(op != '0'){
          printf("Digite o primeiro numero: \n\t");
          scanf("%f", &num1);
          printf("Digite o segundo numero: \n\t");
          scanf("%f", &num2);

          switch (op) {
            case '1':
              resultado = num1 + num2;
              break;
            case '2':
              resultado = num1 - num2;
              break;
            case '3':
              resultado = num1 * num2;
              break;
            case '4':
              resultado = num1 / num2;
          }

          printf("=========== RESULTADO ==========\n");
          printf("O resultado eh: %f \n", resultado );
          printf("================================\n");
      }
  }while(op!='0');

  return 0;
}
