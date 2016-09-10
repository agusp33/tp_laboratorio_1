#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

/** \brief Calcula la suma de 2 numeros (A+B).
 * \param Numero 1.
 * \param  Numero 2.
 * \return La suma de (A+B).
 */

float sum(float a,float b)
{
    float resultado = a+b;
    return resultado;
}

/** \brief Calcula la resta de 2 numeros (A-B).
 * \param Numero 1.
 * \param  Numero 2.
 * \return La resta de (A-B).
 */

float rest(float a, float b)
{
    float resultado = a-b;
    return resultado;
}

/** \brief Calcula la multiplicacion de 2 numeros (A*B).
 * \param Numero 1.
 * \param Numero 2.
 * \return La multiplicacion de (A*B).
 */

float multiplication(float a,float b)
{
    float resultado = a*b;
    return resultado;
}

/** \brief Calcula la division de 2 numeros (A/B).
 * \param Numero 1.
 * \param  Numero 2.
 * \return La division de (A/B).
 */

float division(float a,float b)
{
    float resultado = a/b;
    return resultado;
}

/** \brief Pide el ingreso de un numero.
 * \param Numero a ingresar.
 * \return Devuelve el numero ingresado/guardado.
 */

float getNumber(float a)
{
    float numero;
    printf("Ingrese numero: ");
    scanf("%f",&a);
    numero = a;
    return numero;
}
/** \brief Calcula el factorial de un numero.
 * \param Numero a factoriar.
 * \return Devuelve el valor del factorial.
 */

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

/** \brief Calcula todas operaciones y luego las suma en un solo resultado.
 * \param Primer numero ingresado.
 * \param Segundo numero ingresado.
 * \param Numero factorial.
 * \return Muestra por pantalla los resultados de las operaciones antes realizadas.
 */

float operations (float a,float b,int e)
{
    float resultado;
    float suma = sum(a,b);
    float resta = rest(a,b);
    float mul = multiplication(a,b);
    float div = division(a,b);
    int fact = factorial(e);
    resultado = printf("La suma es: %f\nLa resta es: %f\nLa multiplicacion es: %f\nLa division es: %f\nEl factorial de %d es: %d\n",suma,resta,mul,div,e,fact);
    return resultado;
}

/** \brief Valida que el numero del factorial no sea negativo
 * \param Numero ingresado a validar.
 * \param  Caracter de respuesta.
 * \return  Devuelve el numero ingresado guardado en la variable VALIDACION.
 */

int validationFactorial(int a, char b)
{
    int validacion;
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

/** \brief Validacion de la division por CERO.
 * \param Numero ingresado a validar.
* \param  Caracter ingresado para respuesta.
 * \return Devuelve el valor de la variable VALIDACION.
 */

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

