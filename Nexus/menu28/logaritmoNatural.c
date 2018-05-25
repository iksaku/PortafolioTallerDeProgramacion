#include <stdio.h>
#include <math.h>
#include "menu28.h"

void logaritmoNatural()
{
    printf("\t\t%-5s | %-10s | %s\n", "n", "log(n)", "ln(n)");
    printf("\t\t%s\n", "------------------------------");
    printf("\t\t%-5d | %-10.6f | %-10.6f\n", 1, log10(1), log(1));
    for (int n = 5; n <= 100; n += 5) {
        printf("\t\t%-5d | %-10.6f | %.6f\n", n, log10(n), log(n));
    }
}