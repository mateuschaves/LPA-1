#include <stdio.h>
#include <stdlib.h>


int transform(int horas, int minutos, int segundos);

void main(void){
    int horas, minutos, segundos, total_segundos;
    printf("Informe a quantidade de horas: ");
    scanf("%i", &horas);
    printf("Informe a quantidade de minutos: ");
    scanf("%i", &minutos);
    printf("Informe a quantidade de segundos: ");
    scanf("%i", &segundos);
    total_segundos = transform(horas, minutos, segundos);
    printf(" %i horas, %i minutos e %i segudos totalizam %i segundos.\n", horas, minutos, segundos, total_segundos);
    system("pause");
}

int transform(int horas, int minutos, int segundos){
    return (horas * 3600) + (minutos * 60) + segundos;
}