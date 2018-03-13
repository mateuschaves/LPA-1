#include <stdio.h>
#include <math.h>

/*
 *   Programa que pega três variaveis (a,b,c) e retorna x¹ e x². (Bhaskara).
 */
 
int main(){
	float a = 2, b = 12, c = 8, r1 = 0, r2 = 0, delta = 0;
	if(a == 0){
		printf("A precisa ser maior que 1");
		return 1;
	}
	// Calculando o delta.
	delta = b*b - (4*a*c);
	if(delta < 0){
		printf("Nao existem raizes reais.");
		return 1;
	}
	r1 = (-b + sqrt(delta))/ (2*a);
	r2 = (-b - sqrt(delta))/ (2*a);
	if(r1 == r2){
		printf("x'  = %lf", r1);
		return 0;
	}
	printf("x'  =  %.2lf\n", r1);
	printf("x'' =  %.2lf\n", r2);
}
