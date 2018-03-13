#include <stdio.h>
int main(){
	double h, b, a = 0;
	printf("Informe o tamanho da altura do trianglo : ");
	scanf("%lf", &h);
	printf("Informe o tamanho da base do triangulo : ");
	scanf("%lf", &b);
	a = (b*h)/2;
	printf(" A area do triangulo eh : %.2lf", a);
}
