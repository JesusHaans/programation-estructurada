#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Tenemos los operadores Relacionales que son:
        - < menor que
        - <= menor igual que
        - > mayor que
        - >= mayor igual que
        - != diferente
        - == igual

        Operadores logicos
        - && es el "AND" logico
        - || es el "OR" logico
        - ! es el "NOT" logico

    */


    printf("Operadores Relacionales y Logicos\n");

    float valA= 5;
    float valB= 10;

    if(valA < valB)
        printf("Pregunta 1: Cierto\n");
    else
        printf("Pregunta 1: Falsa\n");

    if(valA <= valB)
        printf("Pregunta 2: Cierto\n");
    else
        printf("Pregunta 2: Falsa\n");

    if(valA > valB)
        printf("Pregunta 3: Cierto\n");
    else
        printf("Pregunta 3: Falsa\n");

    if(valA >= valB)
        printf("Pregunta 4: Cierto\n");
    else
        printf("Pregunta 4: Falsa\n");

    if(valA == valB)
        printf("Pregunta 5: Cierto\n");
    else
        printf("Pregunta 5: Falsa\n");

    if(valA != valB)
        printf("Pregunta 6: Cierto\n");
    else
        printf("Pregunta 6: Falsa\n");


    float valC = valB;


    if(valA < valB && (valB == valC))
        printf("Se cumplieron las dos condiciones\n");
    else
        printf("No se cumplieron las dos condiciones\n");

    if(valA > valB || (valA <= valC))
        printf("Se cumple almenos una de las dos condiciones\n");
    else
        printf("No se cumplieron las dos condiciones\n");

    /*
    Reto
    -imprime instruccion ingresa el primer numero
    -ingresa el numero en una variable
    -repite para una segunda variable
    -si el primer numero es menor que el segundo imprimer el primer numero
    -sino imprime el segundo numero
    */
    float x, y;
    printf("Ingresa el primer numero: \n");
    scanf("%f", &x);
    printf("Ingresa el segundo numero: \n");
    scanf("%f", &y);
    if(x<y)
        printf("el numero menor es: %f", x);
    else
        printf("el numero menor es: %f", y);


    return 0;
}
