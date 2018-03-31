#include <stdio.h>
#include <stdlib.h>
/*
    4.	Foi realizada uma pesquisa em Porto Alegre, com um número desconhecido de pessoas.
        De cada entrevistado foram colhidos os seguintes dados:

            a) clube de preferência (1- Sport ; 2-Central; 3-Outros);
            b) salário;
            c) cidade de origem (0-Recife; 1-Caruaru, 3- Outros).

            Deseja-se saber: 
                1) número de torcedores por clube;
                2) média salarial dos torcedores do Sport e do Central;
                3) número de pessoas nascidas em Recife que não torcem por nenhum dos dois primeiros clubes;
                4) número de pessoas entrevistadas.
*/
int main(){
    int t_sport = 0, t_central = 0, t_outros = 0, clube, torcedores = 0, recife = 0, cidade, menu, i = 1, v = 0;
    float s_sport = 0, s_central = 0, salario = 0;
    do{
        v = 0;
        printf("TORCEDOR: %i\n", i);
        do{
            printf("Informe seu clube de preferencia: (1 - Sport, 2 - Central, 3 - Outros): ");
            fflush(stdin);
            scanf(" %i", &clube);
            if(clube == 1 || clube == 2 || clube == 3){
                v++;
            }else{
                printf("ERRO - Clube informado nao existe !\n ");
            }
        }while(v != 1);
        v = 0;
        do{
            printf("Informe seu salario: ");
            fflush(stdin);
            v = scanf(" %f", &salario);
        }while(v != 1);
        v = 0;
        do{
            printf("Informe sua cidade de origem: (0 - Recife, 1 - Caruaru, 2 - Outros)  ");
            scanf(" %i", &cidade);
            if(cidade == 0 || cidade == 1 || cidade == 2){
                v++;
            }else{
                printf("ERRO - Cidade informada nao existe !\n");
            }
        }while(v != 1);
        switch(clube){
            case 1:
                t_sport++;
                s_sport += salario;
                break;
            case 2:
                t_central++;
                s_central += salario;
                break;
            case 3:
                t_outros++;
                if(cidade == 0)
                    recife++;
        }
        torcedores++;
        v = 0;
        do{
            printf("Digite:\n1) Para continuar.\n0) Para sair.\n>>> ");
            fflush(stdin);
            scanf(" %i", &menu);
            if(menu == 1 || menu == 0){
                v++;
            }else{
                printf("ERRO - Opcao escolhida nao existe ! ");
            }
        }while(v != 1);
        v = 0;
        i++;
    }while(menu != 0);

    if(t_sport == 0){
        s_sport = 0;
    }else if (t_central == 0){
        s_central =0;
    }else{
        s_sport /= (float) t_sport;
        s_central /= (float) t_central;
    }
    printf("Numero de torcedores do sport: %i\n", t_sport);
    printf("Numero de torcedores do central: %i\n", t_central);
    printf("Numero de torcedores de outros times: %i\n", t_outros);
    printf("Media salarial dos torcedores do sport: %.2f\n", s_sport);
    printf("Media salarial dos torcedores do central: %.2f\n", s_central);
    printf("Numero de pessoas nascidas em Recife que nao torce por nenhum dos clubes: %i\n", recife);
    printf("Numero de pessoas entrevistadas: %i\n", torcedores);
    system("pause");
}