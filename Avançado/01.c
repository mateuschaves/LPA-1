#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if(argc == 1){
        printf("Programa %s sem parametros\n", argv[0]);
    }else{
        for( int i = 0; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
        
    }

    system("pause");
}