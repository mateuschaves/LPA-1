#include <stdio.h>

/*
 *
 * ​Crie um loop que ele exiba a seguinte sequência de número 1 a 10.
 *
 *
 */

 int main() {

    int i;

    for(i = 1; i <= 10; i++){
        printf("%i\n",i);
    }

    printf("\nPressione qualquer tecla para sair do programa.");
    scanf("%c");

    return 0;
 }
