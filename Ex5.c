#include <stdio.h> 
int main()
{
    /* Andres Roman Hernandez
    12 de mayo 4IV17
    2018108281
    */
    int numerodepersona, numerodealimentos, porciones;
    printf("\n\n\n Programa 1\n");
    printf("\n\n Dame el numero de personas");
    scanf("%f", &numerodepersona);
    printf("\n\n Dame el numero de alimentos disponibles");
    scanf("%f", &numerodealimentos);
    porciones = numerodealimentos/numerodepersona;
    printf("\n\n La porcion para dividir equitativamente a cada person es %f", porciones);
    return 0;
}