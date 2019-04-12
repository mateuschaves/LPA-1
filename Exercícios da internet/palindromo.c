#include <stdio.h>
#include <string.h>
#include <math.h>

void main(void){
	char nome[20];
	int i, c = 0;
	
	scanf("%s", &nome);
	
	for(i = 0; i < strlen(nome); i++){
		if(nome[i] != nome[ strlen(nome) - i - 1]){
			printf("Nao eh um palindromo !\n");	
			c++;		
			break;
		}
	}
	
	if(c == 0)
		printf("Eh um palindromo");
	
}
