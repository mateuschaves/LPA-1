#include <stdio.h>
#include <stdlib.h>

/*
    Escreva uma função que recebe as 3 notas de um aluno por parâmetro
    e uma letra. Se a letra for A o procedimento calcula a média aritmética
    das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2).
    A média calculada também deve retornar por parâmetro.
*/

// Assinatura da função, não é necessário se criar a função antes do main().
float average(float n1, float n2, float n3, char type);

void main(void){

    // Variáveis que vão guardar as 3 notas e a média do aluno.
    float n1, n2, n3, m;

    // Variável que vai guardar o tipo de média, A para aritmética e P para Ponderada.
    char type;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    printf("Informe a terceira nota: ");
    scanf("%f", &n3);

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