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

int factorial(int a)
{
    int valor;
    if(a == 0)
    {
        return 1;
    }
    valor = a * factorial(a-1);
    return valor;
}

float operations (float a,float b, float c, float d, int e)
{
    float resultado = a+b+c+d+e;
    return resultado;
}

int validationFactorial (int a,char b)
{
    scanf("%d",&a);
    if(a<0)
    {
        printf("Error, no existen factoriales de numeros negativos\n");
        printf("Quiere reingresar el numero s/n??\n");
        scanf("%c",&b);
        if(b=='s')
        {
            do
            {
                printf("Ingrese numero: ");
                scanf("%d",&a);
            }while(a<0);
            return a;
        }
        else
        {
            printf("Se cambiara el numero por 1");
        }
    }
return a;
}

