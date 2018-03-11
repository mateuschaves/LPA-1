#include <stdio.h>
/*
 *	 Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
 *   correspondente em graus Celsius.
 * 		
 *	 c/5 = (f-32)/9
 * 
 */
 
int main(){
	float celsius, fahrenheit = 0;
	printf("Informe a temperatura em graus celsius : ");
	scanf("%f", &celsius);
	fahrenheit = ((celsius / 5) * 9) + 32;
	printf("%f graus celsius em fahrenheit eh igual a : %f", celsius, fahrenheit);
	
}
