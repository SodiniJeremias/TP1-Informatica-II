#include <stdio.h>
#include <string.h>
#include "funciones.h"

void leerArticulo(char articulo[])
{
    printf("Ingrese la descripcion del articulo: ");
    scanf("%s",articulo);
}

int buscarOCrearArticulos(articulos_t articulos[], char articulo[]) //Si no encuentra los crea
{
    int i, articulo_index;
    i=0;
    while (articulos[i].descripcion[0] && strcmp(articulo, articulos[i].descripcion)) i++;
    articulo_index = i;
    strcpy(articulos[i].descripcion, articulo);
    printf("\n%s, Indice: %d\n", articulos[articulo_index].descripcion, articulo_index);

    return articulo_index;
}

void cargarArticulos(articulos_t articulos[], int indice)
{
    int i,sucursal, cantidad;
    
    printf("Para que sucursal va a realizar la carga? (1,2,3)");
        scanf("%d", &sucursal);

        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
        scanf("%d", &articulos[indice].cantidad_sucursal[sucursal-1]);

        articulos[indice].total = 0;

        for(i=0;i<3;i++) articulos[indice].total += articulos[indice].cantidad_sucursal[i];
}

void agregarArticulos(articulos_t articulos[])
{  
    int  opc=0, indice;
    char articulo[90];

    do
    {   
        leerArticulo(articulo);
        indice = buscarOCrearArticulos(articulos, articulo);
        cargarArticulos(articulos, indice);     
        
        printf("Desea ingresar otro articulo? 1-Si, 2-No");
        scanf("%d",&opc);
    } while (opc==1);

}



void imprimirArticulos(articulos_t articulos[])
{
    int i = 0;
    printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    while(i< CANT_ARTICULOS && articulos[i].descripcion[0]){
    printf("%s\t%d\t%d\t%d\t%d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3],articulos[i].total);
    i++;
    }
}

void cambiarArticulos(articulos_t  *a, articulos_t  *b)
{
    articulos_t temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarArticulos(articulos_t articulos[])
{
    int  opc=0, i, articulo_index;
    char articulo[90];

        for ( opc = 1; opc < CANT_ARTICULOS; opc++)
        {
            for ( i = 0; i < CANT_ARTICULOS-1; i++)
            {
                if (articulos[i].total < articulos[i + 1].total)
                {
                    cambiarArticulos(&articulos[i], &articulos[i + 1]);
                }
            }
            
            }
    printf("\n\n###################################");
    printf("\n##############ORDENADO################");
    printf("\n################################### \n");   

    imprimirArticulos(articulos);
}