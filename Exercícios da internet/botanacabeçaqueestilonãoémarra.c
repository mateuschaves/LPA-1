#include <stdio.h>
#include <stdlib.h>

//  Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada
//  uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir
//  calcule:

//  • o número de pessoas;
//  • a idade média do grupo;
//  • a menor idade e a maior idade

void main(void){
    int agePerson = 1, persons = 0, lessAge = 0, biggerAge = 0;
    float averageAge = 0;

    while(1){
        printf("Informe a idade: ");
        scanf("%d", &agePerson);
        
        if ( agePerson == 0 )
            break;

        if( agePerson > biggerAge )
            biggerAge = agePerson;

        if( agePerson < lessAge || lessAge == 0  && agePerson > 0)
            lessAge = agePerson;
        
        persons++;
        // ou persons = persons + 1;

        averageAge += agePerson;
        // ou averageAge = averageAge + agePerson;
    }

    averageAge /= persons;
    // ou averageAge = averageAge / persons;

    printf("Menor idade: %d\n", lessAge);
    printf("Maior idade: %d\n", biggerAge);

    printf("Media de idade: %.2f\n", averageAge);
    printf("Quantidade de pessoas: %d\n", persons);

    system("pause");
}