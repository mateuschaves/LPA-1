#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main(void){
    char name[1024] = "";
    char firstname[1024] = "", lastname_aux;
    char lastname[1024] = "";
    int i = -1,  o = 0;
    printf("Digite seu nome: ");
    gets(name);
    while(name[i] != ' '){
        i++;
        firstname[i] = name[i];
    }
    i = strlen(name) - 1;
    while(name[i] != ' '){
        lastname[o] = name[i];
        i--;
        o++;
    }
    int length = strlen(lastname)-1;
    for(i = 0; i <= length/2; i++){
        lastname_aux = lastname[i];
        lastname[i] = lastname[length - i];
        lastname[length - i] = lastname_aux;
        
    }
    printf("%s, %s.\n", strupr(lastname), firstname);
    system("pause");
}
