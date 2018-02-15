/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/1/2018
 * Proposito: Mostrar el uso de las sentencias de control y ademas el uso de la funcion 'random'
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int para_evaluar, dado1, dado2;
    long T = (long) time(NULL);

    srand((unsigned int) T);
    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    para_evaluar = dado1 + dado2;
    printf("Dado #1: %d \t Dado #2: %d\n", dado1, dado2);

    if (para_evaluar == 7 || para_evaluar == 11) {
        printf("Ganaste! :D ");
    } else {
        printf("Perdiste :( ");
    }

    printf("Tu numero: %d\n", para_evaluar);
    return 0;
}