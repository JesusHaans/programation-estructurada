#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional switch!\n");

    //valor a evaluar en switch
    int option;


    scanf("%i", &option);


    /*

    El swithc evalua lo que tiene option y en cada caso si cumple con lo que tiene entra en el case si no no entra
    y si no entra a ninguno se usa el default para que todo lo que no cumpla con eso caiga ahi

    */
    switch(option)
    {
    case 1:
        printf("Elegiste el numero 1 \n");
        break;

    case 2:
        printf("Elegiste el numero 2 \n");
        break;

    case 3:
        printf("Elegiste el numero 3 \n");
        break;

    default:
        printf("Elegiste una opcion invalida \n");
        break;

    }


    /*

    El reto sera crear un pecueño juego de roll gracias a los switch

    */

    printf("En un camino vas muy feliz y se te aparece un braian :v que haras??? 1:lo enfrentas 2:le das tus cosas  3:huyes\n");

    //valor a evaluar en switch
    int optiong;
    scanf("%i", &optiong);
    switch(optiong)
    {
    case 1:
        printf("El brayan te navajeo por verguero. \n");
        break;

    case 2:
        printf("El brayan se aleja feliz al chingarte tus cosas. \n");
        break;

    case 3:
        printf("El brayan le chifla al kevin y te alcanzan en su motoneta italika y te matan por verguero. \n");
        break;

    default:
        printf("El brayan te navajea por no hacer nada. \n");
        break;

    }
    return 0;


}
