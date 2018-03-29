#include <stdio.h>

int main(void){
	int altura, maior, menor, i, c = 0;
	float media;
	for(i = 0; i < 3; i++){
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

