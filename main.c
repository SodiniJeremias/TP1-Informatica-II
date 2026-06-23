#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int main(void)
{
    printf("Bienvendio al final de Info 1\n\n");

    articulos_t articulos[CANT_ARTICULOS] = {0};
    agregarArticulos(&articulos[0]);
    imprimirArticulos(&articulos[0]);
    ordenarArticulos(&articulos[0]);
    return 0;
}
