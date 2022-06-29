#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMul;
    int rMod;

    rSum= 7+3;
    rRes= 7.1-7.1;
    rDiv= 7.0/3.0;
    rMul= 7*3;
    rMod=7%3;

    printf("Resultado de la suma: %i \n" , rSum);
    printf("Resultado de la resta: %f \n", rRes);
    printf("Resultado de la divicion: %f \n", rDiv);
    printf("Resultado de la multiplicavion: %f \n", rMul);
    printf("Resultado de la modulo: %i \n", rMod);

    /*
    Reto 1 Calcular el Volumen de un cilindro
    */
    float pi= 3.141592;
    float radio,altura,area,volumen;
    printf("Vamos a calcular el volumen de un cilindro !!!\n");
    printf("Ingresa el radio de la base: ");
    scanf("%f",&radio);
    printf("Ingresa la altura del cilindro: ");
    scanf("%f",&radio);
    area=pi*(radio*radio);
    volumen=area*altura;
    printf("El area del cilindro es: %f\n",area);
    printf("El volumen del cilindro es: %f\n",volumen);



    return 0;
}
