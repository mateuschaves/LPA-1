#include <stdio.h>

int main(){
	int cod,i;
	float valor_hora, salario_minimo=1000, salario, horas_trabalhadas;
	char categoria, turno;
	for(i = 0; i<10;i++){
		printf("Informe o seu codigo: ");
		scanf("%i", &cod);
		printf("Informe a sua categoria: (O - Operario, G - Gerente) ");
		fflush(stdin);
		scanf("%c", &categoria);
		printf("Informe o seu turno: (M - Matutino, V - Vespertino, N - Noturno)");
		fflush(stdin);
		scanf("%c", &turno);
		printf("Informe o numero de horas trabalhadas: ");
		scanf("%f", &horas_trabalhadas);
		if(categoria == 'G' && turno == 'N'){
			valor_hora = 0.3 * salario_minimo;
		}else if( (categoria == 'G') && (turno == 'M') || (turno == 'V')){
			valor_hora = 0.2 * salario_minimo;
		}else if(categoria == 'O' && turno == 'N'){
			valor_hora = 0.1 * salario_minimo;
		}else if((categoria == 'O')&& (turno == 'M') || (turno == 'V')){
			valor_hora = 0.05 * salario_minimo;
		}
		printf("Seu salario final: %.2f\n", salario_minimo + (valor_hora*horas_trabalhadas) );
		printf("Valor da hora trabalhada: %.2f\n", valor_hora);
		valor_hora = 0;
		salario = 0;
	}
}
