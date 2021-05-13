#include <stdio.h>
int main()
{
    /* Andres Roman Hernandez
    12 de mayo 4IV17
    2018108281
    */
    int peso, altura, IMC;
    printf("\n\n Programa 7 ");
    printf("\n\n Calcular el indice de masa corporal");
    printf("\n\n Dame el peso");
    scanf("%f", &peso);
    printf("\n\n Dame la altura");
    scanf("&f", &altura);
    IMC = peso/altura;
    printf("\n La masa muscular es %f", IMC);
    return 0;
    }