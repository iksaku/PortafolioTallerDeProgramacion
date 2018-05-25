/*
 * Equipo #2
 * Hecho por:
 * 1889169	Jorge Alejandro Gonzalez Guerra
 * 1794886	Juan Del Angel Torres
 * 1807900	Oscar Alejandro Rodriguez Constantino
 * 1889421	Victor Alfredo Torres Zarate
 * Fecha de Creacion: 2/20/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include "opciones.h"

int main(int argc, char *argv[])
{
    int opt;
    do {
        if (opt != 0) printf("\n\n");
        printf("MENU PRINCIPAL\n");
        printf("==============\n");
        printf("  1.- Calculo de Inversion por Mes\n");
        printf("  2.- Calculo de Comisiones\n");
        printf("  3.- Calculo de una Distancia\n");
        printf("  4.- Salir...\n\n");
        printf("  Seleccione una opcion -> ");
        scanf("%d", &opt);
        printf("\n");
        switch(opt) {
            case 1:
                inversion();
                break;
            case 2:
                comisiones();
                break;
            case 3:
                distancia();
                break;
            default:
                printf("Saliendo...\n");
                break;
        }
    } while (opt >= 1 && opt <= 3);
    system("PAUSE");
    return 0;
}
