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
    int votos_nulos = 0, votos_brancos = 0, votos_c1 = 0, votos_c2 = 0, votos_c3 = 0, i, voto = 0;
    float p_votos_nulos = 0, p_votos_brancos = 0;
    for(i = 1; i <= 10; i++){
        fflush(stdin);
        system("cls");
        printf("ELEITOR: %d\nInforme o seu candidato:\n1 - Eu\n2 - Meu gato\n3 - Grupao no whatsapp\n4 - Voto nulo\n5 - Voto em branco\n>>> ", i);
        scanf(" %i", &voto);
        switch(voto){
            case 1:
                votos_c1++;
                break;
            case 2:
                votos_c2++;
                break;
            case 3:
                votos_c3++;
                break;
            case 4:
                votos_nulos++;
                break;
            case 5:
                votos_brancos++;
                break;
            default:
                printf("Erro - Opcao nao existe.");
                i--;
        }
    }
    p_votos_brancos =  ((float)votos_brancos/(float)10)*100;
    p_votos_nulos =    ((float)votos_nulos/(float)10)*100;
    printf("Total de votos para o candidato 'Eu': %d\n", votos_c1);
    printf("Total de votos para o candidato 'Meu gato': %d\n", votos_c2);
    printf("Total de votos para o canidato  'Grupao no whatsapp': %d\n", votos_c3);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos brancos: %d\n", votos_brancos);
    printf("Percentual de votos nulos: %.2f\n", p_votos_nulos);
    printf("Percentual de votos brancos: %.2f\n", p_votos_brancos);
    system("pause");
}