#include <stdio.h>
#include <stdlib.h>

/*
    Escreva uma função que recebe as 3 notas de um aluno por parâmetro
    e uma letra. Se a letra for A o procedimento calcula a média aritmética
    das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2).
    A média calculada também deve retornar por parâmetro.
*/

float average(float n1, float n2, float n3, char type);

void main(void){
    float n1, n2, n3, m;
    char type;
    for(int i = 0; i < 3; i++){
        printf("Informe a nota %i: ", i + 1);
        switch(i){
            case 0:
                scanf("%f", &n1);
                break;
            case 1:
                scanf("%f", &n2);
                break;
            case 2:
                scanf("%f", &n3);
                break;        
        }
    }
    printf("Informe o tipo de media: ");
    fflush(stdin);
    scanf("%c", &type);
    m = average(n1,n2,n3,type);
    printf("Media: %.2f\n", m);
    system("pause");
}

float average(float n1, float n2, float n3, char type){
    float average;
    switch(type){
        case 'A':
        case 'a':
            average = ( n1 + n2 + n3) / 3.0;
            break;
        case 'P':
        case 'p':
            average = ( (n1*5) + (n2*3) + (n3*2) )  / (float) 10.0;
            break;
        default:
            printf("\n\nInvalid type ! \n\n");
    }
    return average;
}