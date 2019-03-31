#include <stdio.h>
#include <stdlib.h>

void main(void){

    int n, q = 0, i;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0 && i % 3 == 0){
            q++;
        }
    }
    
    if(q)
        printf("%d", q);
    else
        printf("O numero nao possui divisores multiplos de 3!");        
}
