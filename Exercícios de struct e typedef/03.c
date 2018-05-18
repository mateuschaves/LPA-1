#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
    typedef struct {
        char titulo[60];
        char autor[60];
        char area[60];
        char data_emprestimo[20];
        char data_devolucao[20];
        float multa;
    } livros;

    livros livro;
    livro.multa = 10.0;
    strcpy(livro.titulo, "Livro de estatistica");
    printf("%.2f", livro.multa);
    puts(livro.titulo);
    system("pause");
}