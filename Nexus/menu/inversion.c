#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "opciones.h"

void inversion()
{
    float inv_i, inv_f, dif_capital;
    int tiempo;

    printf("* Calculo de Inversion por Mes *\n");

    printf("Especifica la cantidad de dinero que deseas invertir: $");
    scanf("%f", &inv_i);
    printf("Especifica los meses de inversion: ");
    scanf("%d", &tiempo);
    printf("La inversion tendra un aumento del 0.015%% mensual...\n");

    dif_capital = (float) (inv_i * pow(1 + 0.015, 1));
    inv_f = (float) (inv_i * pow(1 + 0.015, tiempo));

    printf(" - Aumento de capital por mes: $%.2f\n", dif_capital);
    printf(" - Capital obtenido despues de %d meses: $%.2f\n", tiempo, inv_f);

    system("pause");
}