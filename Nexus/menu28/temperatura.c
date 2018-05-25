#include <stdio.h>
#include <stdbool.h>
#include "menu28.h"

enum {FROM_CELSIUS, FROM_FAHRENHEIT, FROM_KELVIN, TO_CELSIUS, TO_FAHRENHEIT, TO_KELVIN};
int from;
int to;
float temperature;

double doCalc()
{
    if (from == to) return from;
    switch (from)
    {
        case FROM_CELSIUS:
            if (to == TO_FAHRENHEIT) return (temperature*(9.0/5.0))+32;
            else if (to == TO_KELVIN) return temperature+273.15;
            break;
        case FROM_FAHRENHEIT:
            if (to == TO_CELSIUS) return (temperature-32)*(5.0/9.0);
            else if (to == TO_KELVIN) return (temperature+459.67)*(5.0/9.0);
            break;
        case FROM_KELVIN:
            if (to == TO_FAHRENHEIT) return (temperature*(9.0/5.0))-459.67;
            else if (to == TO_CELSIUS) return temperature-273.15;
            break;
        default:
            return 0;
    }
    return 0;
}

void temperatura()
{
    bool firstTime = true;
    while(true)
    {
        char option;
        char tmp; // Ignored, used just for returning to main menu...
        if (!firstTime) printf("\n\n\n");
        printf("~~~ Menu ~~~\nPorfavor selecciona una opcion para continuar:\n");
        printf("\t1. Convertir de °C a °F\n");
        printf("\t2. Convertir de °C a K\n");
        printf("\t3. Convertir de °F a °C\n");
        printf("\t4. Convertir de °F a K\n");
        printf("\t5. Convertir de K a °C\n");
        printf("\t6. Convertir de K a °F\n");
        printf("Presiona cualquier otra tecla para salir...\n");

        scanf("%c", &option);

        switch(option)
        {
            case '1':
                from = FROM_CELSIUS;
                to = TO_FAHRENHEIT;
                printf("Especifica la temperatura a convertir de °C a °F: ");
                scanf("%f", &temperature);

                printf("La temperatura en °F es: .2%f", doCalc());
                break;
            case '2':
                from = FROM_CELSIUS;
                to = TO_KELVIN;
                printf("Especifica la temperatura a convertir de °C a K: ");
                scanf("%f", &temperature);

                printf("La temperatura en K es: %.2f", doCalc());
                break;
            case '3':
                from = FROM_FAHRENHEIT;
                to = TO_CELSIUS;
                printf("Especifica la temperatura a convertir de °F a °C: ");
                scanf("%f", &temperature);

                printf("La temperatura en °C es: %.2f", doCalc());
                break;
            case '4':
                from = FROM_FAHRENHEIT;
                to = TO_KELVIN;
                printf("Especifica la temperatura a convertir de °F a K: ");
                scanf("%f", &temperature);

                printf("La temperatura en K es: %.2f", doCalc());
                break;
            case '5':
                from = FROM_KELVIN;
                to = TO_CELSIUS;
                printf("Especifica la temperatura a convertir de K a °C: ");
                scanf("%f", &temperature);

                printf("La temperatura en °C es: %.2f", doCalc());
                break;
            case '6':
                from = FROM_KELVIN;
                to = TO_FAHRENHEIT;
                printf("Especifica la temperatura a convertir de K a °F: ");
                scanf("%f", &temperature);

                printf("La temperatura en °F es: %.2f", doCalc());
                break;
            default:
                return;
        }

        firstTime = false;
        printf("\nPresiona <Enter> para volver...");
        scanf("%c", &tmp);
        scanf("%c", &tmp);
    }
}