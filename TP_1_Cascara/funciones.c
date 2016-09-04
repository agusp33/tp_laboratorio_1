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

float operations (float a,float b, float c, float d)
{
    float resultado = a+b+c+d;
    return resultado;
}

int validationFactorial(int a, char b)
{
    int validacion;
    if(a<0 && a == ' ')
    {
        printf("\nError, no se puede hacer factoriar de numeros negativos\n");
        printf("\n¿Quiere reingresar el numero? S/N: ");
        b = toupper(getche());
        if(b == 'S')
        {
            printf("\nReingrese numero mayor/igual a CERO: ");
            scanf("%d",&a);
            validacion  = a;
        }
        else
        {
            printf("\nSystem.Error\a");
        }

    }
    if(a>=0)
    {
        validacion = a;
    }

    return validacion;
}

float validationCeroDivition(float a,char b)
{
    float validation;
    if(a==0)
    {
        printf("\nError, no se puede dividir por CERO\n");
        printf("\n¿Quiere reingresar el numero? S/N: ");
        b = toupper(getche());
        if(b == 'S')
        {
            printf("Reingrese numero: ");
            scanf("%f",&a);
            validation = a;
        }
        else
        {
            printf("\nSystem.Error\a");

        }
    }
    else
    {
        validation = a;
    }

    return validation;
}

