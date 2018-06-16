#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu_mensagem();

float media_idade_respostas_ruins(int somador, int quantidade);

float porcentagem_respostas_pessimo(int quantidade, int total);

void main(){
	typedef struct {
		char nome[60];
		char nota;
		int idade;
	}questionario;
	
	int menu = 1, i = 0, otimo = 0, idade_ruim = 0, maior_idade_pessimo = 0, pessimo = 0, ruim = 0;
    float porcentagem_pessimo, media_idade_ruim;
    char nome[60];
	questionario formularios[100];

	while( menu != 2){

        printf("Informe o nome: ");
        scanf("%s", &formularios[i].nome);

        printf("Infome a sua idade: ");
        scanf("%i", &formularios[i].idade);

        printf("Informe a nota: ");
        fflush(stdin);
        scanf(" %c", &formularios[i].nota);
        switch(formularios[i].nota){
            case 'A':
            case 'a':
                otimo++;
                break;
            case 'B':
            case 'b':
                strcpy(nome, formularios[i].nome);
                break;
            case 'D':
            case 'd':
                media_idade_ruim += formularios[i].idade;
                ruim++;
                break;
            case 'E':
            case 'e':
                pessimo++;
                if(formularios[i].idade > maior_idade_pessimo){
                    maior_idade_pessimo = formularios[i].idade;
                }
                break;
        }
        i++;
		menu_mensagem();
		scanf("%i", &menu);
        
	}

    media_idade_ruim = media_idade_respostas_ruins(media_idade_ruim, ruim);
    porcentagem_pessimo = porcentagem_respostas_pessimo(pessimo, i);

    printf("Quantidade de respostas otimas: %i\n\n", otimo);
    printf("Media de idade das pessoas que reponderam ruim: %.2f\n\n", media_idade_ruim);
    printf("Porcentagem de respostas pessimos: %.2f\n\n", porcentagem_pessimo);
    printf("Maior idade das pessoas que votaram pessimo: %i\n\n", maior_idade_pessimo);
    printf("Nome da ultima pessoa que respondeu bom: %s\n\n", nome);
    system("pause");
}
void menu_mensagem(){
	printf("Deseja continuar ?\n");
	printf("1 - Sim\n2 - Nao\n>>>>> ");
}

float media_idade_respostas_ruins(int somador, int quantidade){
    if(quantidade > 0)
        return somador / (float) quantidade;
    else
        return 0;
}

float porcentagem_respostas_pessimo(int quantidade, int total){
    return ( (float) quantidade/ (float) total) * 100;
}







