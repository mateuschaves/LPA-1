#include <stdio.h>

/*   Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
 *   brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total
 *   de eleitores. 
 */

int main(){
    float eleitores, soma_votos = 0;
    int i = 0;
    float votos[3] = {0,0,0};
    char *votos_tipo;
    float estatistica_votos[3] = {0,0,0};
    int tamanho = sizeof(votos) / sizeof(int);
    printf("Informe a quantidade de eleitores do municipio. : ");
    scanf("%f", &eleitores);
    if(eleitores <= 0){
    	printf("================== ERROR ======================\n");
    	printf("A quantidade de eleitores precisa ser maior que 0.");
    	return 1;
	}
    for(; i < tamanho; i++){
        switch(i){
            case 0:
                votos_tipo = "brancos. : ";
            break;
            
            case 1:
                votos_tipo = "nulos. :";
            break;

            case 2:
                votos_tipo = "validos. :";
        }
        printf("Informe a quantidade de votos %s", votos_tipo);
        scanf("%f", &votos[i]);
        estatistica_votos[i] = (votos[i]/eleitores) * 100;
    }
    i = 0;
    for(; i < tamanho; i++){
    	soma_votos += votos[i];
	}
	if(soma_votos > eleitores){
		printf("============= ERROR ======================\n");
		printf("A quantidade de votos nao pode ser superior a quantidade de eleitores.");
		return 1;
	}
    i = 0;
    for(; i < tamanho; i++){
        switch(i){
            case 0:
                votos_tipo = "brancos. : ";
            break;
            
            case 1:
                votos_tipo = "nulos. :";
            break;

            case 2:
                votos_tipo = "validos. :";
        }
       printf("\nPorcentagem de votos %s eh de %f %%", votos_tipo, estatistica_votos[i]);
    }
}
