#include <stdio.h>
int main()
{
    int perimer, segundo, multiplica, division;
    printf("\n\n Programa 3");
    printf("\n\n Saca el promedio de valores reales");
    printf("\n\n Dame el primer valor real");
    scanf("%f", &primer);
    printf("\n\n Dame el segundo valor real");
    scanf("%f", &segundo);
    multiplica = primer * segundo;
    division = primer / segundo;
    printf("\n El producto es %f", multiplica);
    printf("\n El producto es %f", division);
    return 0;
}