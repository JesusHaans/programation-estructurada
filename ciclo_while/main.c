#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador While!\n");
    int limit;
    scanf("%i", &limit);
    int i = 1;
    /*
    funcion que checa la exprecion booleana que
    recibe y si es verdadera realiza el bloque de
    codigo si no se lo salta y continua.
    */
    while(i <= limit)
    {
        printf("numero: %i \n",i);
        i++;
    }

    // Reto Hacer que el simpbolo # se repita por 5 lineas

    i=0;
    while(i<5)
    {
        printf("#\n");
        i++;
    }
    // ciclo For
    printf("Iteradores For\n");
    int upperLimit, bottomLimit;
    printf("Imprimir de orden descendiente \nIngresa el limite superior: \n");
    scanf("%i", &upperLimit);
    printf("Ingresa el limite inferior: \n");
    scanf("%i", &bottomLimit);
    for(i = upperLimit; i >= bottomLimit; i--)
    {
        printf("El numero es: %i \n", i);
    }
    //reto imprimir la secuencia de fibonachi los primeros n  numeros
    short p,pp,n;
    printf("Ingresa cuantos numeros de fibonacci quieres: \n");
    scanf("%i", &n);
    p = 1;
    pp = 0;
    for(i=0;i<n;i++)
    {
        printf("El numero %i es: %i\n", i,pp);
        pp += p;
        p = pp - p;

    }



    return 0;
}
