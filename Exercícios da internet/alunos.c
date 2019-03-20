#include <stdio.h>
#include <stdlib.h>

// Crie uma estrutura representando os alunos do curso de Introdução a Programação de
// Computadores. A estrutura deve conter a matrícula do aluno, nome, nota da primeira
// prova, nota da segunda prova e nota da terceira prova.

// (a) Permita ao usuario entrar com os dados de 5 alunos. Foi õ/
// (b) Encontre o aluno com maior nota da primeira prova. Foi õ/
// (c) Encontre o aluno com maior media geral. Foi õ/
// (d) Encontre o aluno com menor media geral. Foi õ/
// (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação. Foi õ/

typedef struct{

    int number;
    float firstNote;
    float secondNote;
    float thirdNote;

} student;

void main(void){
    
    student students[5];

    float biggerFirstNote = 0.0, biggerAverage = 0.0, average = 0.0, smallerAverage = 0.0;
    int biggerAverageStudent = 0, smallerAverageStudent = 0;

    for(int i = 0; i < 5; i++){

        // Matrícula
        printf("Informe o matricula do aluno %d: ", i + 1);
        scanf("%d", &students[i].number);

        // Primeira nota
        printf("Informe a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &students[i].firstNote);

        if( students[i].firstNote > biggerFirstNote )
            biggerFirstNote = students[i].firstNote;

        // Segunda nota
        printf("Informe segunda nota do aluno %d: ", i + 1);
        scanf("%f", &students[i].secondNote);

        // Terceira nota
        printf("Informe terceira nota do aluno %d: ", i + 1);
        scanf("%f", &students[i].thirdNote);

        // Méia geral do aluno
        average = ( students[i].firstNote + students[i].secondNote + students[i].thirdNote ) / 3;

        if( average >= 6 ){
            printf("\nAluno Aprovado com media: %.2f. =)\n\n\n", average);
        }else{
            printf("\nAluno Reprovado com media: %.2f. =(\n\n\n", average);
        }

        if( average < smallerAverage || smallerAverage == 0 ){
            smallerAverage = average;
            smallerAverageStudent = students[i].number;
        }

        if( average > biggerAverage ){
            biggerAverage = average;
            biggerAverageStudent = students[i].number;
        }
    }

    printf("Maior primeira nota %.2f \n", biggerFirstNote);

    printf("Aluno com maior media geral: %d, Nota %.2f \n", biggerAverageStudent, biggerAverage);

    printf("Aluno com menor media geral: %d, Nota %.2f \n", smallerAverageStudent, smallerAverage);

    system("pause");
}