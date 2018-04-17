#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, parada = 1, i = 2, mmc = 1;
    printf("Informe o primeiro valor: ");
    scanf("%i", &n1);
    printf("Informe o segundo valor: ");
    scanf("%i", &n2);
    int ni1 = n1, ni2 = n2;
    if(n1 == n2){
        i = n1;
    }
    while(parada != 0){
        if( (n1 % i == 0) && (n2 % i == 0) ){
            n1 = (float) n1 / i;
            n2 = (float) n2 / i;
            mmc*=i;
        }else if(n1 % i == 0){
            n1 = (float) n1 / i;
            mmc*=i;
        }else if(n2 % i == 0){
            n2 = (float) n2 /i;
            mmc*=i;
        }
        if(n1 % i == 0 || n2 % i == 0){
            //
        }else{
            i++;
        }
        if(n1 == 1 && n2 == 1){
            parada = 0;
        }
    }
    printf("Minimo multiplo comum entre %i e %i : %i\n", ni1, ni2, mmc);
    system("pause");
}