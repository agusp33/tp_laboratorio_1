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

float getNumber(float a)
{
    printf("Ingrese numero: ");
    scanf("%f",&a);
    return a;
}

