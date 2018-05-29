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

        int menu = 0, count_id, check = 0, second_check = 0, options, index_count, index_count_destiny;
        float amount, max_cash_out = 1000;
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
                check = 0;
                printf("Choose a option:\n1 - Deposit\n2 - Cash out\n3 - Transfer\n4 - Consult\n ---> ");
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
                            if(amount < max_cash_out){
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
                            }else{
                                printf("\n\nAmount can not be greater than 1000 !\n\n");
                            }
                        break;
                    case 3:
                            printf("Type the account's ID to transfer: ");
                            scanf("%i", &count_id);
                            printf("Type the amount to transfer: ");
                            scanf("%f", &amount);
                            for(int o = 0; o < 5; o++){
                                if(count_id == count[o].id){
                                    index_count_destiny = o;
                                    second_check++;
                                    break;
                                }
                            }
                            if(second_check > 0){
                                if(amount > count[index_count].balance){
                                    printf("\n\nYou do not have that much money like that.\n\n");
                                    strcpy(message, "Unauthorized operation !");
                                }else{
                                    count[index_count].balance -= amount;
                                    count[index_count_destiny].balance += amount;
                                    printf("%s balance: \n", count[index_count].name, count[index_count].balance);
                                    printf("%s balance: \n", count[index_count_destiny].name, count[index_count_destiny].balance);
                                }
                            }else{
                                printf("\n\n Account typed doesn't exist ! \n\n");
                            }
                            break;
                    case 4:
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
            strcpy(message, "Operation performed successfully !");
        }

}
