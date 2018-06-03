#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846
/*
    Faça uma função que recebe por parâmetro o raio de uma esfera e
    calcula o seu volume (v = (4. .R3 π )/3).
*/
float vol(float r);
void main(void){
    float raio;
    float volume;
    printf("Informe o raio: ");
    scanf("%f", &raio);
    volume = vol(raio);
    printf("Volume: %.2f\n", volume);
    system("pause");
}
float vol(float r){
    return ( (4 * pow(r,3) * PI) / 3 );
}