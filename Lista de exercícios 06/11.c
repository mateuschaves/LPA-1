#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    11.	Escrever um programa  para  ler  o  nome,  a  quantidade  em  estoque,
        quantidade  máxima  para estoque  e o  valor  unitário  de  6  produtos.
        Estas  informações  devem  ser  armazenadas  em  vetores separados, ou seja,
        4 vetores. A seguir, ler a posição (0 a 6) de um produto no vetor e a quantidade
        vendida. Se a posição for inválida, deve ser impressa uma mensagem e ser lida uma
        nova posição.  Ajustar a nova quantidade do estoque, ou  seja, atualizar a quantidade
        em estoque e armazenar a  quantidade vendida em um outro vetor. Imprimir o nome do
        produto e o respectivo valor da venda  (para o produto  lido). Repetir novas consultas 
        ao estoque até que o usuário  informe o valor zero  para a posição do produto no vetor.
        Ao final das retiradas, imprimir um balanço de todo o estoque  e das vendas de cada produto,
        escrevendo se o produto está com o estoque normal ou abaixo do  mínimo.
*/
void main(void){
    char nomes[6][60], nome[60];
    int posicao, quantidade_em_estoque[6], quantidade_minima_para_estoque[6], i, parada = 0, vendas, quantidade_vendida[6];
    float valor[6];
    for(i = 1; i <= 6; i++){
        printf("\n\nInforme o nome do produto: ");
        fflush(stdin);
        scanf("%[^\n]s", &nome);
        strcpy(nomes[i], nome);
        printf("Valor: ");
        scanf("%f", &valor[i]);
        printf("Informe a quantidade em estoque: ");
        scanf("%i", &quantidade_em_estoque[i]);
        printf("Informe a quantidade minima para o estoque: ");
        scanf("%i", &quantidade_minima_para_estoque[i]);
        quantidade_vendida[i] = 0;
    }
    while(parada != 1){
    	printf("\n\nInforme a posicao de um produto: ");
    	scanf("%i", &posicao);
    	int stop = 0;
    	while(stop != 1){
    		if(posicao == 0){
    			parada = 1;
    			break;
			}
	    	if(posicao >= 1 && posicao <= 2){
	    		printf("Informe a quantidade vendida: ");
	    		scanf("%i", &vendas);
	    		if(vendas > quantidade_em_estoque[posicao]){
	    			printf("\n\nEstoque insuficiente, temos apenas %i em nosso estoque !\n\n", quantidade_em_estoque[posicao]);
				}else{
					quantidade_vendida[posicao] += vendas;
		    		quantidade_em_estoque[posicao] -= vendas;
		    		printf("\n\nProduto vendido: %s\n", nomes[posicao]);
		    		printf("\n\nValor da venda: %f", valor[posicao] * vendas);
		    		stop = 1;
				}
	    		
			}else{
				printf("\nPosicao informada nao existe !\n");
				printf("\nInforme uma posicao valida: ");
				scanf("%i", &posicao);
			}
		}
		stop = 0;
	}
	for(i = 1; i <= 6; i++){
		printf("\n\n--%s--\n\n", nomes[i]);
		printf("Quantidade vendida: %i\n", quantidade_vendida[i]);
		printf("Valor recebido pelas vendas: R$ %f\n", valor[i]*quantidade_vendida[i]);
		printf("Quantidade restante no estoque: %i\n", quantidade_em_estoque[i]);
		if(quantidade_em_estoque[i] < quantidade_minima_para_estoque[i]){
			printf("Status do estoque: Precisando reabastecer !\n");
		}else{
			printf("Status do estoque: Estoque acima da quantidade minima !\n");
		}
	}
}
