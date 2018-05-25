#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "menu28.h"

char* nombreEleccion(int eleccion)
{
    return eleccion == 1 ? "Piedra" : eleccion == 2 ? "Papel" : "Tijeras";
}

void juego()
{
    int valid, jugador, computadora;
    do
    {
        printf("Escoja una opcion: \n");
        printf("1. Piedra\n");
        printf("2. Papel\n");
        printf("3. Tijeras\n");
        printf("> \n");
        valid = scanf("%d", &jugador);
        if (valid != 1)
        {
            printf("El valor seleccionado debe ser numerico... Intentelo denuevo...\n\n");
            continue;
        }
        if (jugador < 1 || jugador > 3)
        {
            valid = 0;
            printf("El valor seleccionado debe ser 1, 2 o 3... Intentelo denuevo...\n\n");
            continue;
        }
    } while (valid != 1 || jugador < 1 || jugador > 3);

    printf("Has escogido: %s\n", nombreEleccion(jugador));

    srand((unsigned int) time(NULL));
    computadora = (rand() % 3) + 1;

    printf("La computadora ha escogido: %s\n", nombreEleccion(computadora));

    if (jugador == computadora) printf("Has empatado con la computadora\n");
    else if ((computadora - jugador) % 3 == 1) printf("La computadora ha ganado :(\n");
    else printf("¡Has ganado!\n");
}

void piedraPapelOTijeras()
{
    bool cont;
    do
    {
        juego();
        char d;
        printf("¿Desea seguir jugando? (s/N) ");
        scanf("\n%c", &d);
        cont = (d == 's');
    } while (cont);
}
