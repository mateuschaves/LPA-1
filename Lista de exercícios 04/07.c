#include <stdio.h>
#include <stdlib.h>
/*
    7.	Em uma eleição presidencial com 10 eleitores existem 3 candidatos.
        Os votos são informados por meio de código. Os códigos utilizados são: 
        a. 1 , 2, 3  - Votos para os respectivos candidatos 
        (você deve montar a tabela ex: 1 – Candidato 1 / 2-  Candidato 2 / 3 – Candidato 3)
        4 - Voto Nulo e 5 - Voto em Branco
  
        Faça um programa que calcule e mostre: 
        b. O total de votos para cada candidato; 
        c. O total de votos nulos; 
        d. O total de votos em branco; 
        e. A percentagem de votos nulos sobre o total de votos; 
        f. A percentagem de votos em branco sobre o total de votos. Para finalizar o 
        conjunto de votos tem-se o valor zero. 
*/
int main(){

    /*
     *  Declaração das variáveis utilizadas no programa.
     *  Inicialmente algumas começam com valor 0 para evitar erros.
     */

    // Armazena todos os votos nulos, utilizada na linha 151
    int votos_nulos = 0;
    // Armazena todos os votos brancos, utilizada na linha 171;
    int votos_brancos = 0;
    // Armazena todos os votos do candidato 1, utilizada na linha 90;
    int votos_c1 = 0;
    // Armazena todos os votos do canditato 2, utilizada na linha 111;
    int votos_c2 = 0;
    // Armazena todos os votos do candidato 3, utilizada na linha 131;
    int votos_c3 = 0;
    // Variável utilizada no loop ( Linha 51 );
    int i;
    // Armazena o valor digitado pelo usuário (Linha 72);
    int voto = 0;
    // Armazena a porcentagem de votos nulos, utilizada na linha 197;
    float p_votos_nulos = 0;
    // Armazena a porcentagem de votos em branco, utilizada na linha 195;
    float p_votos_brancos = 0;

    /* 
     * Usando a estrutura de repetição for para executar 10 vezes o código de dentro.
     * A variável i começa com 1 e equanto ela for menor ou igual a 10 o código dentro
     * do for se repete e é somado + 1 na variável i.
     * 
     * São 10 repetições pelo fato da questão pedir para ler o voto de 10 eleitores.
     */
    for(i = 1; i <= 10; i++){
        /* fflush(stdin) evita que o enter seja considerado uma entrada válida,
         * sem ela é possível que o programa peça o voto ao usuário apenas uma vez e
         * pule os outros 9 scanf que lê o voto do usuário, por considerar como uma
         * entrada enter digitado antes.
         */
        fflush(stdin);
        /* system("cls") serve para limpar os dados mostrados no terminal.
         *
         * A cada nova repetição do código ( cada vez que ele vai ler um novo voto)
         * as informações anteriores mostradas no terminal são limpas.
         * 
         * Não é necessário para o programa ser executado, é apenas pra deixar mais fácil de usar,
         * evitando muitas informações na tela.
         */
        system("cls");
        /* Usando o printf para informar o número do eleitor (Ex. ELEITOR: 1, ELEITOR: 2)
         * e informando as opções de voto, com o código de cada candidato.
         */
        printf("ELEITOR: %d\nInforme o seu candidato a presidencia:\n1 - Eu\n2 - Meu gato\n3 - Resolver tudo em um grupo no whatsapp\n4 - Voto nulo\n5 - Voto em branco\n>>> ", i);
        // Lendo a opção de voto do usuário e guardando na variável voto;
        scanf(" %i", &voto);
        /* Usando a estrutura condicional switch na variável voto 
         * para verificar o valor digitado pelo usuário. 
         */
        switch(voto){
            // Verificando se valor digitado para a variável voto foi 1
            case 1:
                /* Se sim, é somado + 1 na variável votos_c1,
                 * que armazena os votos do cantidato 1.
                 * 
                 * Também pode ser usado
                 *      votos_c1 = votos_c1 + 1;
                 * 
                 * Sendo que 
                 *      votos_c1++;
                 * 
                 * Faz a mesma coisa utilizando menos linhas.
                 */
                votos_c1++;
                /*
                 * Break é necessário para que a verificação pare,
                 * já que se o programa chegou aqui a condição foi satisfeita,
                 * ou seja voto = 1.
                 */
                break;

            // Verificando se valor digitado para a variável voto foi 2
            case 2:
                /* Se sim, é somado + 1 na variável votos_c2, 
                 * que armazena os votos do cantidato 2.
                 * 
                 * Também pode ser usado
                 *      votos_c2 = votos_c2 + 1;
                 * 
                 * Sendo que 
                 *      votos_c2++;
                 * 
                 * Faz a mesma coisa utilizando menos linhas.
                 */
                votos_c2++;
                /*
                 * Break é necessário para que a verificação pare,
                 * já que se o programa chegou aqui a condição foi satisfeita,
                 * ou seja voto = 2.
                 */
                break;
            // Verificando se valor digitado para a variável voto foi 3
            case 3:
                /* Se sim, é somado + 1 na variável votos_c3, 
                 * que armazena os votos do cantidato 3.
                 * 
                 * Também pode ser usado
                 *      votos_c3 = votos_c3 + 1;
                 * 
                 * Sendo que 
                 *      votos_c3++;
                 * 
                 * Faz a mesma coisa utilizando menos linhas.
                 */
                votos_c3++;
                /*
                 * Break é necessário para que a verificação pare,
                 * já que se o programa chegou aqui a condição foi satisfeita,
                 * ou seja voto = 3.
                 */
                break;
            // Verificando se valor digitado para a variável voto foi 4
            case 4:
                 /* Se sim, é somado + 1 na variável votos_nulos, 
                 * que armazena os votos nulos.
                 * 
                 * Também pode ser usado
                 *      votos_nulos = votos_nulos + 1;
                 * 
                 * Sendo que 
                 *      votos_nulos++;
                 * 
                 * Faz a mesma coisa utilizando menos linhas.
                 */
                votos_nulos++;
                /*
                 * Break é necessário para que a verificação pare,
                 * já que se o programa chegou aqui a condição foi satisfeita,
                 * ou seja voto = 4.
                 */
                break;
            // Verificando se valor digitado para a variável voto foi 5
            case 5:
                /* Se sim, é somado + 1 na variável votos_brancos, 
                 * que armazena os votos brancos.
                 * 
                 * Também pode ser usado
                 *      votos_brancos = votos_brancos + 1;
                 * 
                 * Sendo que 
                 *      votos_brancos++;
                 * 
                 * Faz a mesma coisa utilizando menos linhas.
                 */
                votos_brancos++;
                /*
                 * Break é necessário para que a verificação pare,
                 * já que se o programa chegou aqui a condição foi satisfeita,
                 * ou seja voto = 5.
                 */
                break;
            /* Caso nenhuma das opções acima sejam satisfeitas,
             * ou seja a variável voto é diferente de 1, 2 e 3,
             * o bloco de código contido em default é executado.
             */
            default:
                // Mostrando uma mensagem de erro, já que a opção de voto informada não existe.
                printf("Erro - Opcao nao existe.");
                // Diminuindo 1 da variável i, já que esse voto foi inválido ele não pode ser contabilizado.
                i--;
        }
    }
    /* Calculando a porcentagem de votos brancos e guardando na variável p_votos_brancos.
     * talvez seja necessário forçar os valores a serem do tipo float
     * para conseguir realizar a divisão.
     * 
     *  fórmula : (votos_brancos ou votos_nulos / total_de_votos )*100
     */
    p_votos_brancos =  ((float)votos_brancos/(float)10)*100;
    // Calculando a porcentagem de votos nulos e guardando na variável p_votos_nulos
    p_votos_nulos =    ((float)votos_nulos/(float)10)*100;
    // Usando printf para mostrar as informações da eleição. 
    printf("Total de votos para o candidato 'Eu': %d\n", votos_c1);
    printf("Total de votos para o candidato 'Meu gato': %d\n", votos_c2);
    printf("Total de votos para o candidato 'Resolver tudo em um grupo no whatsapp': %d\n", votos_c3);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos brancos: %d\n", votos_brancos);
    printf("Percentual de votos nulos: %.2f\n", p_votos_nulos);
    printf("Percentual de votos brancos: %.2f\n", p_votos_brancos);
    system("pause");
}