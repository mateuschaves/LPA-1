#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    4. Escrever um programa que cadastre vários produtos. Em seguida,
    imprima uma lista com o código e nome da cada produto. Por último,
    consulte o preço de um produto através de seu código e depois
    pergunte se deseja encerrar o programa 1 - sair 0 - não.
*/

void main(void){
    typedef struct {
        char name[50];
        int code;
        float price;
    } products;
    products product[100];
    int menu = 0, options, i = 0, code, index = -1;
    while(menu != 1){
        printf("What do you want to do ?\n1 - Product Registration\n2 - Check price\n3 - List products\n--->");
        scanf("%i", &options);
        switch(options){
            case 1:
                printf("Type the product's name: ");
                fflush(stdin);
                gets(product[i].name);
                printf("Type the product's price: ");
                fflush(stdin);
                scanf("%f", &product[i].price);
                printf("Type the product's code: ");
                fflush(stdin);
                scanf("%i", &product[i].code);
                i++;
                break;
            case 2:
                printf("Type the product's code: ");
                fflush(stdin);
                scanf("%i", &code);
                for(int o = 0; o < i; o++){
                    if(code == product[o].code){
                        index = o;
                        break;
                    }
                }
                if(index != -1){
                    printf("\n---- Product Found ! ------\n\n");
                    printf("Name: %s\n", product[index].name);
                    printf("Price: R$%.2f\n", product[index].price);
                    printf("Code: %i\n", product[index].code);
                    printf("--------------------------\n");
                }else{
                    printf("\n\nProduct not found !\n\n");
                }
                break;
            case 3:
                for(int o = 0; o < i; o++){
                    printf("\n---------------------\n");
                    printf("Name: %s\n", product[o].name);
                    printf("Price:  R$%.2f\n", product[o].price);
                    printf("Code: %i\n", product[o].code);
                    printf("\n---------------------\n");
                }
                break;
            default:
                printf("Code doesn't exist !\n\n");
        }
        printf("Do you want to leave ?\n1 - Yes !\n2 - Nope !\n ---> ");
        fflush(stdin);                
        scanf("%i", &menu);
    }
}