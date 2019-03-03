#include <stdio.h>
#include <stdlib.h>

void main(void){
    int numbers[4] = {0, 0, 0, 0};
    int lessNumbers[3] = {0, 0, 0};
    int sum = 0;

    for(int i = 0; i < 4; i++){
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    if( numbers[0] > numbers[1] && numbers[0] > numbers[2]  && numbers[0] > numbers[3] )
        sum = numbers[1] + numbers[2] + numbers[3];

    else if( numbers[1] > numbers[0] && numbers[1] > numbers[2] && numbers[1] > numbers[3] )
        sum = numbers[0] + numbers[2] + numbers[3];

    else if( numbers[2] > numbers[0] && numbers[2] > numbers[1] && numbers[2] > numbers[3] )
        sum = numbers[0] + numbers[3] + numbers[1];
    
    else if( numbers[3] > numbers[0] && numbers[3] > numbers[1] && numbers[3] > numbers[2] )
        sum = numbers[0] + numbers[2] + numbers[1];
    
    printf("Soma dos tres menores numeros: %d \n", sum);
        
    system("pause");
}
