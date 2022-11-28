#include <cs50.h>
#include <stdio.h> // codigo simple que se tiene que usar obligatoriamente en cada codigo de C, si no, este se no funcionaria

int main(void) // lo mismo que lo de arriba
{
    //int = nombre para el valor que se utilizara al referenciar el int atado a este
    //int X = valor para primer numero de suma
    //get_int es un comando creado por la misma cs50 que se encarga de tomar el comando int y su valor [x] para realizar una accion con esta misma
    //y permitir que en ves de estar haciendo miles de lineas de codigo para que pueda hacer lo que get_int hace, te falicita mas
  int x = get_int("x: ");
  //int Y = valor para segundo numero de suma
  int y = get_int("y: ");
  //printf es lo que se utiliza como defecto cuando haces un primer programa en C como por ejemplo printf("hello, world\n"), pero tambien tiene otras funciones
  //las cuales ayudan a facilitar el codigo, como el valor % que funciona para imprimir en la pantalla el valor de INT, pero tambien se puede tomar mas valores como %s entre otros
  //%i, imprime el valor de INT [los dos valores de INT], para poder lograr hacer ciertas acciones
  //y en este caso que es una calculadora, se utilizara para suma con [+]
    printf("%i\n", x + y);
}
//no necesariamente se tiene que poner el valor que le agregaste al INT en el [(get_int)] ("x: "), por ejemplo
//puedes remplazarlo con "Insert one number here
//esto tambi aplica para el [(get_int)] del valor y
//pero si quieres que la linea de codigo sea mas corta y que mejor se entienda, es mas facil agregar
