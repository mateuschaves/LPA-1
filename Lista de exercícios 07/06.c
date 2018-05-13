#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Escreva um programa que leia o primeiro nome e a altura das moças inscritas em um
    concurso de beleza. Quando for informada a palavra FIM para o nome da moça o
    programa deverá ser encerrado e imprimir: o nome e a altura da moça mais alta e o
    número de moças no concurso. Considere que todas as moças possuem altura
    diferente.
*/
void main(void){
    char name[60], name_max_height[60] = "Nenhuma consagrada foi registrada";
    float height[1024], max_height = 0;
    int i = 0;
    // Loop infinito.
    while(1){
        printf("Informe o nome da consagrada: ");
        fflush(stdin);
        gets(name);
        // Quando o nome for igual a "FIM" ou "fim", o loop é encerrado.
        if( strcmp(name, "FIM") == 0 || strcmp(name, "fim") == 0 ){
            // Encerra o loop.
            break;
        }
        printf("Informe a altura da consagrada: ");
        fflush(stdin);
        scanf("%f", &height[i]);
        // Verificando se a altura informada é maior que a maior altura registrada até o momento.
        if(height[i] > max_height){
            // Maior altura vai ser a altura informada.
            max_height = height[i];
            // Nome da candidata com a maior altura vai ser o nome da canditada informada com a maior altura até o momento.
            strcpy(name_max_height, name);
        }
        i++;
    }
    // Mostrando o resultado.
    printf("Nome da consagrada mais alta: %s\n", name_max_height);
    printf("Altura da consagrada mais alta: %.2f\n", max_height);
    printf("Quantidade de cosagradas no concurso: %i\n", i);
    system("pause");
}