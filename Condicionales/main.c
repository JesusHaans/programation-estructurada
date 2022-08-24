#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Condicionales IF
    printf("Condicion if\n");

    float valA, valB, valC;

    valA = valB = 100;

    printf("primera condicion \n");
        if(valA == valB)    //si solo es una lina que ejecutaremos en la condicion no hace falta poner {}
            printf("Ambos son iguales\n");

    printf("Segunda Condicion \n");

    if(valA== valB)
    {
        printf("Ambos son iguales\n");
        valC= valA + valB;
        printf("Ademas la suma de ambos numeros es: %f \n", valC);
    }

    //Condicionales IF ELSE

    printf("Condicion if, else, else if\n");

    valA= 50;
    valB= 100;
    valC= 150;

    printf("condicion: \n");

    if(valA == valB)
        printf("Esta condicion no se va a cumplir\n");
    else if(valB == valC)
        printf("Tampoco se va a cumplir esta condicion\n");
    else
    {
        printf("Ninguna Condicion se cumplio \n");
        printf("Despues de esta linea el programa va a terminar\n");
    }

    // RETO de condicionales
    /*
        La maquina debe tener una variable definida como 5 y el usuario
        debe meter por stdinput un numero del 1 al 10 si el numero que
        ingreso el usuario imprimiremos una felicitacion.
    */

    int valM= 5;
    int valU;
    printf("Adivina el numero que estoy pensando del 1 al 10 :\n");
    scanf("%i",&valU);
    if(valM == valU)
        printf("Ganaste Adivinaste ñ.ñ\n");
    else
        printf("Mejor suerte para la proxima u.u\n");



    return 0;
}
