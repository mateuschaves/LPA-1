#include <stdio.h>
#include <stdlib.h>
/*
    12. Ler um vetor de 10 elementos inteiros.
        Após isto, imprimir na tela os 10 valores
        lidos e o usuário poderá escolher um destes
        valores para ser excluído do vetor. Ler o valor
        escolhido e eliminá-lo do vetor.  No  momento
        da  exclusão  todos  os  valores  posteriores
        ao  valor  escolhido  deverão  ser reorganizados
        (movidos uma posição para esquerda) a fim de que
        o vetor resultante não fique com um espaço em branco. Imprimir o novo vetor.
*/

void main(void){
    int v[10], i = 0, n, aux, j, c, menu = 0, bug = 0;
    for(; i < 10; i++){
         printf("Informe o valor %i: ", i+1);
         scanf("%i", &v[i]);   
    }
    for(i=0; i < 10; i++){
        printf("v[%i] = %i\n", i, v[i]);
    }
    while(menu != 1){
        printf("Informe um valor para excluir: ");
        scanf("%i", &n);
        for(i=0;i<10;i++){
            if(v[i] == n && bug == 0){
                v[i] = 0;
                bug = 1;
                for(c = 0; c < 10; c++){
                    for(j = c + 1; j < 10; j++){
                        if(v[c] > v[j]){
                            aux = v[j];
                            v[j] = v[c];
                            v[c] = aux; 
                        }
                    }
                }
            }
        }
        bug = 0;
        for(i=0; i < 10; i++){
            printf("v[%i] = %i\n", i, v[i]);
        }
        printf("Deseja continuar ? 2 - Sim 1 - Nao\n");
        scanf("%i", &menu);
    }
    system("pause");
}
