#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <string.h>

void main(void){
    float saltos[5], media;
    int i, parada = 0, tamanho = sizeof(saltos)/sizeof(int);
    char nome[60];
    // Parada vai ser 1 quando o usuário digitar 0 para o nome.
    while(parada != 1){
        printf("\n\nInforme o nome do atleta: ");
        scanf("%s", &nome);
        // Nome não informado.
        if(strcmp(nome, "0") == 0){
            break;
        }
        // Lendo as 5 distâncias do salto do atleta.
        for(i = 0; i < tamanho; i++){
            printf("Informe a distancia do salto %i: ", i+1);
            fflush(stdin);
            scanf(" %f", &saltos[i]);
            media += saltos[i];
        }
        // Calculando a média dos distâncias dos saltos.
        media /= (float) tamanho;
        // Mostrando o nome do atleta.
        printf("Atleta: %s\n", nome);
        // Mostrando as distâncias dos saltos.
        for(i = 0; i < tamanho; i++){
            printf(" Salto %i = %.2f\n", i+1, saltos[i]);
        }
        // Mostrando a média das distâncias.
        printf("Media dos saltos: %.2f\n", media);
        media = 0;
    }   
    system("pause");
}
=======
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
>>>>>>> 41988754b721e1c343ef8f246430c561075a1593
