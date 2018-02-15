/*
 * Equipo #2
 * Hecho por:
 * 1889169	Jorge Alejandro Gonzalez Guerra
 * 1794886	Juan Del Angel Torres
 * 1807900	Oscar Alejandro Rodriguez Constantino
 * 1889421	Victor Alfredo Torres Zarate
 * Fecha de Creacion: 2/14/2018
 */

#include <stdio.h>
#include <stdbool.h>

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

int main()
{
    bool firstTime = true;
    while(true)
    {
        char option;
        char tmp; // Ignored, used just for returning to main menu...
        if (!firstTime) printf("\n\n\n");
        printf("~~~ Menu ~~~\nPorfavor selecciona una opcion para continuar:\n");
        printf("\t - (1) Convertir de °C a °F\n");
        printf("\t - (2) Convertir de °C a K\n");
        printf("\t - (3) Convertir de °F a °C\n");
        printf("\t - (4) Convertir de °F a K\n");
        printf("\t - (5) Convertir de K a °C\n");
        printf("\t - (6) Convertir de K a °F\n");
        printf("Presiona cualquier otra tecla para salir...\n");

        scanf("%c", &option);

        switch(option)
        {
            case '1':
                from = FROM_CELSIUS;
                to = TO_FAHRENHEIT;
                printf("Especifica la temperatura a convertir de °C a °F: ");
                scanf("%f", &temperature);

                printf("La temperatura en °F es: %f", doCalc());
                break;
            case '2':
                from = FROM_CELSIUS;
                to = TO_KELVIN;
                printf("Especifica la temperatura a convertir de °C a K: ");
                scanf("%f", &temperature);

                printf("La temperatura en K es: %f", doCalc());
                break;
            case '3':
                from = FROM_FAHRENHEIT;
                to = TO_CELSIUS;
                printf("Especifica la temperatura a convertir de °F a °C: ");
                scanf("%f", &temperature);

                printf("La temperatura en °C es: %f", doCalc());
                break;
            case '4':
                from = FROM_FAHRENHEIT;
                to = TO_KELVIN;
                printf("Especifica la temperatura a convertir de °F a K: ");
                scanf("%f", &temperature);

                printf("La temperatura en K es: %f", doCalc());
                break;
            case '5':
                from = FROM_KELVIN;
                to = TO_CELSIUS;
                printf("Especifica la temperatura a convertir de K a °C: ");
                scanf("%f", &temperature);

                printf("La temperatura en °C es: %f", doCalc());
                break;
            case '6':
                from = FROM_KELVIN;
                to = TO_FAHRENHEIT;
                printf("Especifica la temperatura a convertir de K a °F: ");
                scanf("%f", &temperature);

                printf("La temperatura en °F es: %f", doCalc());
                break;
            default:
                printf("Saliendo del programa...");
                return 0;
        }

        firstTime = false;
        printf("\nPresiona <Enter> para volver al menu principal...");
        scanf("%c", &tmp);
        scanf("%c", &tmp);
    }
}