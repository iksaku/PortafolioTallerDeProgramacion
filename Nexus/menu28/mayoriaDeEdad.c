#include <stdio.h>
#include "menu28.h"

void mayoriaDeEdad()
{
    int age;
    printf("Ingresa tu edad: ");
    scanf("%d", &age);
    printf("Eres %s de edad\n", age >= 18 ? "mayor" : "menor");
}