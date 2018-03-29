#include <stdio.h>
/*
	Tem-se um conjunto de dados contendo a altura 25 pessoas. Faça um programa que calcule e mostre: 
	*	a maior altura;
	*	menor altura; 
	*	a média de altura;
*/
int main(void){
	int altura, maior, menor, i, c = 0;
	float media;
	for(i = 0; i < 25; i++){
		printf("Qual a altura ? ");
		scanf("%d", &altura);
		if(c == 0){
			menor  = altura;
			c++;
		}
		if(altura >= maior){
			maior = altura;
		}
		if(altura <= menor){
			menor = altura;
		}
		media += altura;
	}
	media /= i;
	printf("Altura maior %d\n", maior);
	printf("Altura menor %d\n", menor);
	printf("Media %.2f\n", media);
	return 0;
}

