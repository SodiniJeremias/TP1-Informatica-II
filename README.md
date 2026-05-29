Trabajo Practico N°1: Informatica II

## Descripcion:

Este codigo es un codigo refactor. [Ver código original](https://github.com/DamRCorba/Informatica-2/blob/main/02_Estructuras/ejemplos/Ejemplo3/main.c).

Ambos tienen el mismo proposito, un sistema basico para la gestion de productos. En donde se puede cargar, ordenar y saber la cantidad de articulos que tenemos en las distintas sucursales y su total.
El codigo refractor hace que el algoritmo sea mas legible y facil de modificar o corregir.

## Funcionalidades:
    - Cargar o crear articulos
    - Saber la cantidad de articulos en cada sucursal
    - Cálculo del total de articulos
    - Ordenamiento de mayor a menor cantidad de articulos totales

## Estructura del proyecto:
    - "main.c" -> Logica principal del programa
    - "funciones.c" -> Logica de cada funcion
    - "funciones.h" -> Declaracion de estructuras y funciones

## Funciones:
 - leerArticulo() -> Lee el nombre del articulo 
 - buscarOCrearArticulo() -> Busca el articulo y si no existe lo crea en la posicion mas cercana desocupada.
 - cargarARticulos() -> Carga la cantidad de articulos que se le diga en la sucursal indicada
 - imprimirArticulos() -> Muestra la tabla de articulos
 - ordenarArticulos() -> Ordena de mayor a menor la tabla de articulos por su total.
 
## Compilacion y ejecucion:
    Para compilar el proyecto escribir en la terminal:
        1) gcc main.c funciones.c -o TP1
        2) ./TP1

## Autor: Sodini Jeremias 
