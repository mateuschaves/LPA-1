#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declarando uma constante chamada PI com o seu respectivo valor.
#define PI 3.14159265358979323846
/*
    Faça uma função que recebe por parâmetro o raio de uma esfera e
    calcula o seu volume (v = (4. .R3 π )/3).
*/
// Assinatura da função, não é necessário se criar a função antes do main().
float vol(float r);


void main(void){

    // Guarda o valor do raio da esfera digitada pelo usuário.
    float raio;

    // Guarda o valor do volume da esfera retornado pela função criada.
    float volume;

    printf("Informe o raio: ");
    // Lendo o valor do raio.
    scanf("%f", &raio);

    // A variável volume vai receber o retorno da função que calcula o volume.
    // A função que calcula o volume precisa de um parâmetro ( raio ), para calcular o volume.
    volume = vol(raio);

    // Mostrando o valor do volume com apenas duas casas decimais.
    printf("Volume: %.2f\n", volume);
    system("pause");
}

// Função que calcula o volume, ela recebe um parâmetro ( r ) do tipo float.
float vol(float r){
    // Retornando o valor do volume da esfera.
    return ( (4 * pow(r,3) * PI) / 3 );
}