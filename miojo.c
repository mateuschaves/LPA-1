#include <stdio.h>

int main(){
	int cod, horas_trabalhadas,i;
	float valor_hora, salario_minimo=1000, salario;
	char categoria, turno;
	for(i = 0; i<10;i++){
		printf("Informe a sua categoria: (O - Operario, G - Gerente) ");
		fflush(stdin);
		scanf("%c", &categoria);
		printf("Informe o seu turno: (M - Matutino, V - Vespertino, N - Noturno)");
		fflush(stdin);
		scanf("%c", &turno);
		if(categoria == 'G' && turno == 'N'){
			valor_hora = 0.3 * salario_minimo;
		}else if( (categoria == 'G') && (turno == 'M') || (turno == 'V')){
			valor_hora = 0.2 * salario_minimo;
		}else if(categoria == 'O' && turno == 'N'){
			valor_hora = 0.1 * salario_minimo;
		}else if((categoria == 'O')&& (turno == 'M') || (turno == 'V')){
			valor_hora = 0.05 * salario_minimo;
		}
		printf("Seu salario final: %.2f\n", salario_minimo + valor_hora );
		printf("Valor da hora trabalhada: %.2f\n ", valor_hora);
		valor_hora = 0;
		salario = 0;
	}
}
