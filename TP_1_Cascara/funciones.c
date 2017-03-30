#include "funciones.h"
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

float getNumber()
{
    float a;
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

float operations (float a,float b)
{
    float resultado;
    float suma = sum(a,b);
    float resta = rest(a,b);
    float mul = multiplication(a,b);
    float div = division(a,b);
    int redondeo = (int)a;
    int fact = factorial(redondeo);
    resultado = printf("La suma es: %f\nLa resta es: %f\nLa multiplicacion es: %f\nLa division es: %f\nEl factorial de %d es: %d\n",suma,resta,mul,div,redondeo,fact);
    return resultado;
}

int validationFactorial(int a)
{
    int validacion;
    char b;
    if(a<0)
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

float validationCeroDivition(float a)
{
    float validation;
    char b;
    if(a==0)
    {
        printf("\nError, no se puede dividir por CERO\n");
        printf("\n¿Quiere reingresar el numero? S/N: ");
        b = toupper(getche());
        if(b == 'S')
        {
            printf("\nReingrese numero: ");
            scanf("%f",&a);
            validation = a;
        }
        else
        {
            printf("\nSystem.Error\a\n");
        }
    }
    else
    {
        validation = a;
    }

    return validation;
}
