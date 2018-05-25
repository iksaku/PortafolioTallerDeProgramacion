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
#include <math.h>

enum {FIGURE_RECTANGLE, FIGURE_TRAPEZE, FIGURE_CUBE, FIGURE_SPHERE, FIGURE_CYLINDER};
int figure_type;
float a = 0, b = 0, h = 0;

double doCalc()
{
    switch (figure_type)
    {
        case FIGURE_RECTANGLE:
            return a*b;
        case FIGURE_TRAPEZE:
            return h*((a+b)/2.0);
        case FIGURE_CUBE:
            return pow(a, 3);
        case FIGURE_SPHERE:
            return (4.0/3.0)*M_PI*pow(a, 3);
        case FIGURE_CYLINDER:
            return h*M_PI*pow(a, 2);
        default:
            return 0;
    }
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
        printf("\t - (r) Calcular el area de un Rectangulo\n");
        printf("\t - (t) Calcular el area de un Trapecio\n");
        printf("\t - (c) Calcular el volumen de un Cubo\n");
        printf("\t - (e) Calcular el volumen de una Esfera\n");
        printf("\t - (y) Calcular el volumen de un Cilindro\n");
        printf("Presiona cualquier otra tecla para salir...\n");

        scanf("%c", &option);

        switch(option)
        {
            case 'r':
                figure_type = FIGURE_RECTANGLE;
                printf("Especifica la medida de la base del rectangulo: ");
                scanf("%f", &b);
                printf("Especifica la medida de la altura del rectangulo: ");
                scanf("%f", &a);

                printf("El area del rectangulo es: %f", doCalc());
                break;
            case 't':
                figure_type = FIGURE_TRAPEZE;
                printf("Especifica la medida de la base menor del trapecio: ");
                scanf("%f", &b);
                printf("Especifica la medida de la base mayor del trapecio: ");
                scanf("%f", &a);
                printf("Especifica la medida de la altura del trapecio: ");
                scanf("%f", &h);

                printf("El area del trapecio es: %f", doCalc());
                break;
            case 'c':
                figure_type = FIGURE_CUBE;
                printf("Especifica la medida de cualquier lado del cubo: ");
                scanf("%f", &a);

                printf("El volumen del cubo es: %f", doCalc());
                break;
            case 'e':
                figure_type = FIGURE_SPHERE;
                printf("Especifica el radio de la esfera: ");
                scanf("%f", &a);

                printf("El volumen de la esfera es: %f", doCalc());
                break;
            case 'y':
                figure_type = FIGURE_CYLINDER;
                printf("Especifica el radio del cilindro: ");
                scanf("%f", &a);
                printf("Especifica la altura del cilindro: ");
                scanf("%f", &h);

                printf("El volumen del cilindro es: %f", doCalc());
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