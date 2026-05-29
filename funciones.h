#ifndef FUNCIONES_H
#define FUNCIONES_H

#define CANT_ARTICULOS 60
#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
#define TOTAL 4

typedef struct {
    char descripcion[90];
    int cantidad_sucursal[3]; // sucursal 1 2 3    
    int total;
}articulos_t;

void agregarArticulos(articulos_t articulos[]);
void imprimirArticulos(articulos_t articulos[]);
void ordenarArticulos(articulos_t articulos[]);
void leerArticulo(char articulo[]);
int buscarOCrearArticulos(articulos_t articulos[], char articulo[]);
void cargarArticulos(articulos_t articulos[], int indice);

#endif