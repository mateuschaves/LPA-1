#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
     Crie um programa que tenha um menu com as seguintes opções 
     ● 1 - Cadastrar 
     ● 2 - Editar 
     ● 3 - Imprimir 
     ● 4 - Sair Cadastrar ​- 
     irá cadastrar em uma estrutura cliente terá cod(será a ordem de cadastro)
      nome, idade,cpf, sexo,endereço. 
     Editar​ - edite passando a posição de ordem do cliente e edite todos os campos.
     Imprimir​ - exiba todos os clientes na tela. Sair​ - O programa é encerrado.
    no fim de cada opção, deve voltar ao menu de opções. 
*/
void main(void){
    // Estrutura de um cliente.
    typedef struct {
        char name[60], gender, address[60];
        long int cpf;
        int age, code;
    } clients;
    // Criando o objeto que irá guardar os clientes.
    clients client[100];
    // Variáveis utilizadas no algoritmo.
    int parada = 0, menu, i = 0, code, check, index;
    // Equanto a variável parada for diferente de 1 esse loop vai ficar se repetindo.
    while(parada != 1){
        if(i + 1 > 1){
            printf("\n\n");
        }
        // MENU
        printf("Choose a option:\n1 - Register\n2 - Update\n3 - Print\n4 - Exit\n >>>>   ");
        scanf("%i", &menu);
        // Testando a opção escolhida no menu.
        switch(menu){
                // Caso for digitado 1, fazer o cadastro de um novo cliente.
                case 1:
                    // Nome do cliente.
                    printf("Type client's name: ");
                    fflush(stdin);
                    gets(client[i].name);
                    // Código do cliente.
                    printf("Type client's code: ");
                    scanf("%i", &client[i].code);
                    // Idade do cliente.
                    printf("Type age's client: ");
                    fflush(stdin);
                    scanf("%i", &client[i].age);
                    // Cpf do cliente.
                    printf("Type cpf's client: ");
                    fflush(stdin);
                    scanf("%i", &client[i].cpf);
                    // Endereço do cliente.
                    printf("Type address's client: ");
                    fflush(stdin);
                    gets(client[i].address);
                    // Sexo do cliente.
                    printf("Type gender's client: ");
                    fflush(stdin);
                    scanf("%c", &client[i].gender);
                    // i++ serve para somar mais 1 na variável que conta a quantidade de clientes cadastrados.
                    i++;
                    break;
                // Caso for digitado 2, irá alterar as informções de um cliente já cadastrado.
                case 2:
                    // Lendo o código do cliente que deseja atualizar.
                    printf("Type client's ID: ");
                    scanf("%i", &code);
                    // Procurando no vetor de clientes o cliente com o código informado.
                    for(int o = 0; o < i; o++){
                        // Verificando se o código informado é igual o do cliente no índice o;
                        if(client[o].code == code){
                            check++;
                            // Se sim, o índice 'o' é salvo da variável índice.
                            index = o;
                            break;
                        }
                    }
                    if(check > 0 ){
                        // Pedindo as novas informações do cliente.
                        printf("Type the new client's name: ");
                        fflush(stdin);
                        gets(client[index].name);
                        printf("Type the new age's client: ");
                        fflush(stdin);
                        scanf("%i", &client[index].age);
                        printf("Type the new cpf's client: ");
                        fflush(stdin);
                        scanf("%i", &client[index].cpf);
                        printf("Type the new address's client: ");
                        fflush(stdin);
                        gets(client[index].address);
                        printf("Type the new gender's client: ");
                        fflush(stdin);
                        scanf("%c", &client[index].gender);
                    }else{
                        printf("\nClient not found !\n");
                    }
                    check = 0;
                    index = 0;
                    break;
                // Caso for digitado 3, irá mostrar as informções de um cliente já cadastrado.
                case 3:
                    // Pedindo o código do cliente.
                    printf("Type the client's code: ");
                    scanf("%i", &code);
                    // Procurando no vetor de clientes o cliente com o código informado.
                    for(int o = 0; o < i; o++){
                        // Verificando se o código informado é igual o do cliente no índice o;
                        if(code == client[o].code){
                            check++;
                            // Se sim, o índice 'o' é salvo da variável índice.
                            index = o;
                            break;
                        }
                    }
                    // Mostrando as informações do cliente.
                    // A variável index vai guardar o índice do cliente com o código informado.
                    printf("\n\nName: %s\n", client[index].name);
                    printf("Age: %i\n", client[index].age);
                    printf("Address: %s\n", client[index].address);
                    printf("Gender: %c\n", client[index].gender);
                    printf("Code: %i\n", client[index].code);
                // Caso for digitado 4, O loop se encerra.
                case 4:
                    // Quando parada for igual a 1, o loop encerra.
                    parada = 1;
                    break;
                default:
                    printf("Invalid option !");
        }
    }
}