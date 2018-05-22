 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 void main(void){
     typedef struct {
         char nome[60];
         float horas;
         char turno;
         float valor_hora;
         float salario;
     } funcionarios;
     // criando um objeto do tipo
     funcionarios assalariados[100];
     // Declarando variáveis.
     int i = 0, menu, parada = 0, index_maior_salario, index_menor_salario, c = 0, trabalhadores_noturnos = 0, trabalhadores_diurnos = 0;
     float horas, salario_minimo = 1000, maior_salario = 0, menor_salario, media_salarial_d = 0, media_salarial_n = 0;
     // Enquanto 
     while(parada != 1){
         printf("\n\n----------------------------\n\n");
         printf("1 - Cadastrar funcionario\n2 - Listar funcionarios e a quantidade\n3- Consultar\n4 - Sair\n ------> ");
         scanf("%i", &menu);
         switch(menu){
             case 1:
                printf("Informe o nome do funcionario: ");
                fflush(stdin);
                gets(assalariados[i].nome);
                printf("Informe a quantidade de horas trabalhadas: ");
                scanf("%f", &assalariados[i].horas);
                printf("Informe o turno: ");
                fflush(stdin);
                scanf("%c", &assalariados[i].turno);
                if(assalariados[i].turno == 'D' || assalariados[i].turno == 'd'){
                    assalariados[i].valor_hora = salario_minimo * 0.15;
                    assalariados[i].salario = assalariados[i].valor_hora * assalariados[i].horas;
                    trabalhadores_diurnos++;
                    media_salarial_d = media_salarial_d + assalariados[i].salario;
                    printf("Salario: %.2f", assalariados[i].salario);
                }else if( assalariados[i].turno == 'N' || assalariados[i].turno == 'n'){
                    assalariados[i].valor_hora = salario_minimo * 0.35;
                    assalariados[i].salario = assalariados[i].valor_hora * assalariados[i].horas;
                    trabalhadores_noturnos++;
                    media_salarial_n = media_salarial_n + assalariados[i].salario;
                    printf("Salario: %.2f", assalariados[i].salario);
                }
                // Solução para achar o menor salário.
                if(c == 0){
                    index_menor_salario = i;
                    menor_salario = assalariados[i].salario;
                    c++;
                }
                // Achando o maior salário.
                if(assalariados[i].salario > maior_salario){
                    maior_salario = assalariados[i].salario;
                    index_maior_salario = i;
                }
                // Achando o menor salário.
                if(assalariados[i].salario < menor_salario){
                    menor_salario = assalariados[i].salario;
                    index_menor_salario = i;
                }
                // Calculando a média.
                if(trabalhadores_diurnos > 0){
                    media_salarial_d = media_salarial_d / (float) trabalhadores_diurnos;
                }
                if(trabalhadores_noturnos > 0){
                    media_salarial_n = media_salarial_n / (float) trabalhadores_noturnos;
                }
                i++;
                break;
             case 2:
                printf("\n\n------------ LISTANDO %i FUNCIONARIOS------------\n\n", i);
                for(int o = 0; o < i; o++){
                    printf("Nome: %s\n", assalariados[o].nome);
                }
                break;
             case 3:    
                printf("\n\n----- FUNCIONARIO COM MAIOR SALARIO ------\n\n");
                printf("Nome: %s\n", assalariados[index_maior_salario].nome);
                printf("Salario: %.2f\n", assalariados[index_maior_salario].salario);
                printf("Horas trabalhadas: %.2f\n", assalariados[index_maior_salario].horas);
                printf("Turno: %c\n", assalariados[index_maior_salario].turno);
                printf("Valor da hora trabalhada: %.2f\n", assalariados[index_maior_salario].valor_hora);
                printf("\n\n----- FUNCIONARIO COM MENOR SALARIO ------\n\n");
                printf("Nome: %s\n", assalariados[index_menor_salario].nome);
                printf("Salario: %.2f\n", assalariados[index_menor_salario].salario);
                printf("Horas trabalhadas: %.2f\n", assalariados[index_menor_salario].horas);
                printf("Turno: %c\n", assalariados[index_menor_salario].turno);
                printf("Valor da hora trabalhada: %.2f\n", assalariados[index_menor_salario].valor_hora);
                printf("\n\n\nMedia salarial dos trabalhadores noturnos: %.2f\n", media_salarial_n);
                printf("\n\n\nMedia salarial dos trabalhadores diurnos: %.2f\n", media_salarial_d);
                break;
             case 4:
                parada = 1;
                break;
             default:
                printf("\n\n Opcao invalida ! \n\n");
         }
         








     } 
     
 }
