#include <stdio.h>
#include <stdlib.h>
// Criar um algoritmo para concatenar duas strings
int main(void) {
  char palavra1[] = {'p','a','o',' '};
  char palavra2[] = {'m','o','r','t','a','d','e','l','a'};
  char novaPalavra[13];
  int i, o, c = 0, p = 0;
  for(i = 0; i < 13; i++){
  	if(i < 4){
	     novaPalavra[i] = palavra1[i];
	}else{
	     for(o = 5; o <= 15; o++){
	     	novaPalavra[o] = palavra2[p];
		p++;
	      }
	c++;
	}
	if(c > 0){
	    break;
	}
  }
  for(i = 0; i < 14; i++){
  	printf("%c", novaPalavra[i]);
  }
  printf("\n");
  system("pause");
}
