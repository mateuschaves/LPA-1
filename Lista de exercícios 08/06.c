#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    6. Escreva um programa que simule contas bancárias

            ● Ao iniciar o programa vamos criar contas bancárias para 5 clientes.
            ○ Cada conta terá o nome e o CPF do cliente associado a ela.
            ○ No ato da criação da conta o cliente precisará fazer um depósito
            inicial.

            ● Após as contas serem criadas, o sistema deverá possibilitar realizações
            de saques ou depósitos nas contas, perguntando primeiro o número da
            conta e depois a operação 1 para saques ou 2 depósitos .
            ○ Sempre que uma operação de saque ou depósito seja realizada, o
            sistema deverá imprimir o nome do titular e o saldo final da conta e
            perguntar se deseja sair do programa.
*/

void main(void){
        typedef struct  {
            int id;
            long int cpf;
            char name[60];
            float balance;
        } counts;

        counts count[5];

        int menu = 0, count_id, check = 0, options, index_count;
        float amount;
        char message[] = "Operation performed successfully !";

        for(int i = 0; i < 2; i++){
            printf("Type your name: ");
            fflush(stdin);
            gets(count[i].name);
            printf("Type your CPF: ");
            fflush(stdin);
            scanf("%i", &count[i].cpf);
            printf("Type the count's ID: ");
            scanf("%i", &count[i].id);
            printf("Type your initial balance: ");
            scanf("%f", &count[i].balance);
            printf("\n\n");
        }

        while(menu != 1){
            printf("Type the count's ID: ");
            scanf("%i", &count_id);
            for(int i = 0; i < 5; i++){
                if(count_id == count[i].id){
                    index_count = i;
                    check++;
                    break;
                }
            }
            if(check == 0){
                printf("Account number doesn't exist !\n");
            }else{
                printf("Choose a option:\n1 - Deposit\n2 - Cash out\n ---> ");
                scanf("%i", &options);
                switch(options){
                    case 1:
                            printf("Enter deposit amount: ");
                            scanf("%f", &amount);
                            if(amount < 0){
                                amount *= -1;
                                printf("\n\nThe number entered has been transformed into positive.\n\n");
                            }
                            count[index_count].balance += amount;
                        break;
                    case 2:
                            printf("Enter cash out amount: ");
                            scanf("%f", &amount);
                            if(amount < 0){
                                amount *= -1;
                                printf("\n\nThe number entered has been transformed into positive.\n\n");
                            }
                            if(amount > count[index_count].balance){
                                printf("\n\nYou do not have that much money like that.\n\n");
                                strcpy(message, "Unauthorized operation !");
                            }else{
                                count[index_count].balance -= amount;
                            }
                        break;
                    default:
                        printf("Option doesn't exist !\n");
                }
            }
            printf("\n--------- %s -------------\n", message);
            printf("Account owner: %s\n", count[index_count].name);
            printf("Balance: %.2f\n",  count[index_count].balance);
            printf("CPF: %i\n", count[index_count].cpf);
            printf("Account ID: %i", count[index_count].id);
            printf("\n----------------------------------------------------------\n\n\n");
            printf("Do you want to leave ?\n1 - Yep !\n2 - Nope !\n ----> ");
            scanf("%i", &menu);
        }

}
