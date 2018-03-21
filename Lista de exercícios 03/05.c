#include <stdio.h>
#include <stdlib.h>
/*
    5.	Faça um programa que receba o código correspondente ao cargo de um funcionário
    e o seu salário atual e mostre o cargo, o valor do aumento e seu novo salário. Os 
    cargos na tabela a seguir:
*/
int main(){
    int codigo, menu;
    float salario, aumento, novo_salario;
    do{
        printf("Informe o codigo correspondente ao cargo: ");
        scanf("%i", &codigo);
        printf("Informe o salario: ");
        scanf("%f", &salario);
        switch(codigo){
            case 1:
                aumento = salario*0.5;
                novo_salario = salario + aumento;
                printf("\nSeu cargo: Escriturario. \nSeu aumento: %f\nSeu novo salario: %f\n", aumento, novo_salario);
                break;
            case 2:
                aumento = salario*0.35;
                novo_salario = salario + aumento;
                printf("\nSeu cargo: Secretario. \nSeu aumento: %f\nSeu novo salario: %f\n", aumento, novo_salario);
                break;
            case 3:
                aumento = salario*0.1;
                novo_salario = salario + aumento;
                printf("\nSeu cargo: Gerente. \nSeu aumento: %f\nSeu novo salario: %f\n", aumento, novo_salario);
                break;
            case 4:
                printf("\nSeu cargo: Gerente. \nSeu cargo nao possui aumento no salario.\nSeu salario: %f\n", salario);
                break;
            default:
                printf("\nPreencha corretamente.");
        }
        printf("1) para sair.\n2) para continuar.\n >>>>");
        scanf("%i", &menu);
        system("cls");
    }while(menu != 1);
    
}