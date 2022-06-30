#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*
    Operadores de incremento

    Primero da el valor de a y despues operacion
    a++ -> a=a+1
    a-- -> a=a-1

    Primero hace la operacion luego da el valor de a
    ++a -> a=a+1
    --a -> a=a-1

    Operadores de asignacion

    a+=n -> a=a+n
    a-=n -> a=a-n
    a+=n -> a=a*n
    a/=n -> a=a/5
    a%=n -> a=a%n

    */
    printf("Operadores de asignacion\n");

    int value = 11;

    printf("El valor de nuestra variable es :%i\n", value);

    value +=1;
    printf("El valor de nuestra variable es :%i\n", value);

    value -=2;
    printf("El valor de nuestra variable es :%i\n", value);

    value *=5;
    printf("El valor de nuestra variable es :%i\n", value);

    value /=4;
    printf("El valor de nuestra variable es :%i\n", value);

    value %=6;
    printf("El valor de nuestra variable es :%i\n", value);

    printf("Operadores de incremento y decremento\n");

    int val,res;
    val = 25;
    res= val++;

    printf("El valor de nuestro resultado es:%i\n", res);

    val = 25;
    res= ++val;

    printf("El valor de nuestro resultado es:%i\n", res);

    val=25;
    res= val--;
    printf("El valor de nuestro resultado es:%i\n", res);

    val=25;
    res= --val;
    printf("El valor de nuestro resultado es:%i\n", res);

    /*
     Reto 1
     -tenemos una variable x
     -utilizando operadores de asignacion hacer que esta variable c se sume asimisma el doble de su valor
     -imprimir resultado
    */
    int x= 10;
    x+= x+x;
    printf("El valor de nuestro x es:%i\n", x);

    /*
     Reto 2
     -ingresa un numero entero
     -con operadores de asignacion realiza la operacion de modulo con 5
     -imprime el resultado mas uno usando operadores de incremento

    */
    int y;
    printf("Ingresa el valor de y: ");
    scanf("%i",&y);
    y%= 5;
    //y++;
    printf("El valor final de y es: %i\n", ++y);


    return 0;
}
