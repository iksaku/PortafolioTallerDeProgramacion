#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "menu28.h"

double formula(double x)
{
    return pow(x, 3) + pow(x, 2) - 5*x + 3;
}

double proceso(int a, int b, int n)
{
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    double paso = (double) (b - a) / n;
    double area = 0.0;
    for (int i = a; i < n; ++i)
    {
        area += formula(a + (i + 0.5) * paso) * paso;
    }
    return area;
}

int input(char* message)
{
    bool valid;
    int i;
    do
    {
        printf("%s: \n", message);
        valid = scanf("%d", &i) == 1;
        if (!valid) printf("El valor no es valido, porfavor intentelo denuevo...\n");
    } while (!valid);
    return i;
}

void integralDeFuncion()
{
    int a, b, n;
    a = input("Ingrese 'a'");
    b = input("Ingrese 'b'");
    n = input("Ingrese el numero de veces a repetir (n)");
    printf("Formula utilizada: X^3 + X^2 - 5X + 3\n");
    printf("Area aproximada calculada de %d a %d: %f\n", a, b, proceso(a, b, n));
}