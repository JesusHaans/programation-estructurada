#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    /*

    En esta parte hicimos el manejo de imprimir

    */
    // solo declaramos la variable pero no la inicializamos
    int integerA;

    //declaramos e inicializamos la variable
    int integerB= 13;
    float floatA= 1.1;//flotante
    double doubleA= 1.2;//es igual que el float pero con un espacio mas en memoria
    char letterA= 'A';//caracter
    bool boolean= false;//buleano no existe por si solo necesitamos una libreria stdbool.h


    // aqui imprimimos el mensaje con % inicial del tipo y despues de la coma va la variable
    printf("El valor de nuestro entero B es: %i \n", integerB);
    printf("El valor de mi flotante A es: %f \n",floatA);//"\n" es un salto de linea si no lo ponemos imprime de corrido con el siguiente printf
    printf("El valor de mi doble A es: %f \n", doubleA);//se usa %f por que en esencia un double es un float
    printf("El valor de mi caracter A es: %c \n", letterA);

    //aqui hacemos lo de arriba pero en una sola linea separando los parametros que imprimiremos con comas
    printf("El valor de nuestro entero B es: %i \nEl valor de mi flotante A es: %f \nEl valor de mi doble A es: %f \nEl valor de mi caracter A es: %c \n",integerA,floatA,doubleA,letterA);

    printf("Ingresa el valor del entero A: \n");

    //para ingresar cosas del usuario se usa scanf se castea lo que ingresa y con ampersand(&) que es un apuntador le indicamos a donde lo vamos a guardar
    scanf("%i", &integerA);
    printf("El valor del entero A Es: %i \n", integerA);


    /*
    Reto 1
    objetivo tener dos bariables guardarlas con lo que ingresamos de la entrada estandar y las intercambiamos con un auxiliar y despues las imprimimos
    */

    int x,y,aux;

    printf("Da el valor de x: ");
    scanf("%i",&x);
    printf("Da el valor de y: ");
    scanf("%i",&y);

    aux=x;
    x=y;
    y=aux;

    printf("El valor intercambiado del entero x es: %i \n", x);
    printf("El valor intercambiado del entero y es: %i \n", y);

    return 0;
}
