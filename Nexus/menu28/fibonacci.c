#include <stdio.h>
#include <stdbool.h>
#include "menu28.h"

void serie()
{
    int valid;
    int n;
    long long int n1 = 1, n2 = 0, siguiente = 0;

    do
    {
        printf("Ingresa un numero entero: ");
        valid = scanf("%d", &n);
        if (valid != 1)
        {
            printf("El valor registrado debe ser numerico... Intentelo denuevo...\n\n");
            continue;
        }
        if (n < 0)
        {
            valid = 0;
            printf("El valor registrado debe ser mayor que ser positivo y mayor que 1 (uno)... Intentelo denuevo...\n\n");
            continue;
        }
    } while (valid != 1);

    for (int i = 2; i <= n; ++i)
    {
        if(n <= 1) siguiente = n;
        else
        {
            siguiente = n1 + n2;
            n2 = n1;
            n1 = siguiente;
        }
    }

    printf("F(%d) = %lld\n", n, siguiente);
}

void fibonacci()
{
    bool cont;
    do
    {
        serie();
        char d;
        printf("¿Desea pedir otro numero? (s/N) ");
        scanf("\n%c", &d);
        cont = (d == 's');
    } while (cont);
}