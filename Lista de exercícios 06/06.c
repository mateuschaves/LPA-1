#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    6.	Foram anotadas as idades e alturas de 30 alunos. 
        Faça um Programa que determine quantos alunos com
        mais de 13 anos possuem altura inferior à média de
        altura desses alunos.
*/

void main(void){
    float alturas[30], media_altura;
    int idades[30], qtd_inferior_media = 0, i = 0;
    for(; i < 4; i++){
        printf("Informe a altura do %i aluno: ", i+1);
        scanf("%f", &alturas[i]);
        media_altura += alturas[i];
        printf("Informe a idade do %i aluno: ", i+1);
        scanf("%i", &idades[i]);
    }
    media_altura /= (float) i;
    for(i = 0; i < 4; i++){
        if( (alturas[i] < media_altura) && (idades[i] > 13) ){
            qtd_inferior_media++;
        }
    }
    printf("\nQuantidade de Alunos com altura inferior a media %.2f com mais de 13 anos: %i\n", media_altura, qtd_inferior_media);
    system("pause");
}
