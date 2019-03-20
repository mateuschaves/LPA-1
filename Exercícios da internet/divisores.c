#include <stdio.h>
#include <stdlib.h>

void main(void){

    int n, q = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i % 3 == 0){
            q++;
        }
    }

    printf("%d", q);

    system("pause");
}
