#include <stdio.h>
#include <stdlib.h>
#include "opciones.h"

void comisiones()
{
    float ventas, de_comision;

    printf("* Calculo de Comisiones *\n");

    printf("Especifica la ganancia de ventas: $");
    scanf("%f", &ventas);
    printf("Se tomara el 10%% del total de ventas...\n");

    de_comision = (float) (ventas * 0.10);

    printf(" - El total de ganacia es: $%.2f\n", ventas - de_comision);
    printf(" - El total de comision retirado es de: $%.2f\n", de_comision);

    system("pause");
}