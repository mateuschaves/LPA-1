#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[5] = {7,5,3,4,2};
    int i, j, temp;
    int tamanho = sizeof(v)/sizeof(int);
    for(i = 0; i<tamanho; i++){
        for(j = i+1; j < tamanho; j++){
            if(v[i]>v[j]){
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
    for(i = 0; i<tamanho;i++){
        printf("%i\n", v[i]);
    }
    system("pause");
}