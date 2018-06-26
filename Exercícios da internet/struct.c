// 2. Crie um looping para preencher as 5 estruturas de pessoas criadas no
//    exemplo passado. e leia esses valores e exiba esses dados depois.

#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[66];
  int idade;
  char sexo;
}pessoas;

void main(void){
  pessoas pessoa[5];
  int i;
  
  for(int i = 0; i < 5; i++) 
  {
    printf("NOME: ");
	fflush(stdin);
    fgets(pessoa[i].nome,66,stdin);
    
    printf("IDADE: ");
    fflush(stdin);
    scanf(" %i", &pessoa[i].idade);
    
    printf("SEXO:\n(F) - FEMININO\n(M) - MASCULINO\n(I) - INDEFINIDO\n");
    fflush(stdin);
    scanf(" %c", &pessoa[i].sexo);
    
    printf("NOME: %s\n", pessoa[i].nome);
    printf("IDADE: %i\n", pessoa[i].idade);
    
    if(pessoa[i].sexo == 'F'|| pessoa[i].sexo == 'f')
    {
      printf("SEXO (F) - FEMININO\n ");
    }
    else if(pessoa[i].sexo == 'M'|| pessoa[i].sexo == 'm')
    {
      printf("SEXO (M) - MASCULINO\n");
    }
    else if(pessoa[i].sexo == 'I' || pessoa[i].sexo == 'i')
    {
      printf("SEXO (I) - INDEFINIDO\n");
    }
  }
}