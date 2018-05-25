#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "opciones.h"

void distancia() {
    float x1, y1, x2, y2;
    double distance;

    printf("* Calculo de una Distancia *\n");

    printf("Especifica el primer punto X: ");
    scanf("%f", &x1);
    printf("Especifica el primer punto Y: ");
    scanf("%f", &y1);
    printf("Especifica el segundo punto X: ");
    scanf("%f", &x2);
    printf("Especifica el segundo punto Y: ");
    scanf("%f", &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("La distancia entre las coordenadas (%.2f, %.2f) y (%.2f, %.2f), es de: %.2f\n", x1, y1, x2, y2, distance);

    system("pause");
}
