#include <stdio.h>

int main(){
    int tabuada, bye, i;
    printf("Qual tabuada voce deseja ? ");
    scanf("%i", &tabuada);
    for(i = 0; i <=10; i++){
            int resultado = tabuada*i;
            printf("\n %i x %i = %i.", tabuada, i, resultado);
    }
    printf("\n Aperte alguma tecla para continuar.");
    scanf("%i", &bye);
}
