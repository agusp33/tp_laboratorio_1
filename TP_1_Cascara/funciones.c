#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

float sum(float a,float b)
{
    float resultado = a+b;
    return resultado;
}

float rest(float a, float b)
{
    float resultado = a-b;
    return resultado;
}

float multiplication(float a,float b)
{
    float resultado = a*b;
    return resultado;
}

float division(float a,float b)
{
    float resultado = a/b;
    return resultado;
}

float validacionCero (float a,char b)
{
    float resultado;
    printf("La division no puede ser por 0(CERO), Quiere reingresar el numero? s/n: \n\n");
    scanf("%c",&b);
    if(b == 's')
    {
        printf("Numero nuevo: ");
        scanf("%f",&a);
        resultado = a;
    }
    else
    {
        a=0;
        resultado = a;
    }
    return resultado;
}
