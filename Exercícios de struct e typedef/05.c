#include <stdio.h>

char menu(void);

int main(void){
    typedef struct {
        char name[60];
        char address[60];
        char phone[20];
    } client;

    client clients[50];

    int stop = 1, i = 0;
    char m;

    while(stop != 0){
        printf("\n CLIENT: %i\n", i + 1);

        printf("\nType client's name: ");
        fflush(stdin);
        fgets(clients[i].name, 60, stdin);

        printf("\nType client's address: ");
        fflush(stdin);
        fgets(clients[i].address, 60, stdin);

        printf("\nType client's phone: ");
        fflush(stdin);
        fgets(clients[i].phone, 20, stdin);

        m = menu();

        switch(m){
            case 'S':
            case 's':
                stop  = 0;
                break;
            case 'N':
            case 'n':
                stop  = 1;
                break;
            default:
                printf("\nInvalid option !\n");
        }
    }
}

char menu(void){
    char menu;
    printf("\nDo you want to leave ? (S/N): ");
    fflush(stdin);
    scanf("%c", &menu);
    return menu;
}