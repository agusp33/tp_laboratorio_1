#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

/** \brief Calcula la suma de 2 numeros (A+B).
 * \param Sumatoria de (A+B).
 * \return La suma de (A+B).
 */

float sum(float a,float b)
{
    float resultado = a+b;
    return resultado;
}

/** \brief Calcula la resta de 2 numeros (A+B).
 * \param Resta de (A+B).
 * \return La resta de (A+B).
 */

float rest(float a, float b)
{
    float resultado = a-b;
    return resultado;
}

/** \brief Calcula la multiplicacion de 2 numeros (A+B).
 * \param Multiplicacion de (A+B).
 * \return La multiplicacion de (A+B).
 */

float multiplication(float a,float b)
{
    float resultado = a*b;
    return resultado;
}

/** \brief Calcula la division de 2 numeros (A+B).
 * \param Division de (A+B).
 * \return La division de (A+B).
 */

float division(float a,float b)
{
    float resultado = a/b;
    return resultado;
}

/** \brief Pide el ingreso de un numero.
 * \param Se le pide al usuaria que ingrese un numero.
 * \param Se scanea/guarda el numero en la variable.
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
 * \param Verifica si el numero es Igual a 0 y retorna 1 en caso de serlo.
 * \param Se llama a la funcion nuevamente y se multiplica el numero ingresado por el mismo numero menos uno, hasta llegar a 0
 *        y se guarda la multiplicacion en la variable valor.
 *        Ejemplo: 3! = 3 * 3-1 -> en A se guarda el valor de 2 , se verifica que sea distinto de CERO y la sig. multiplicacion es *2-1
 *                   cambia nuevamente el valor de A a 1 , vuelve a verificar que sea distinto de CERO y al ser 1-1 = 0. Ya no multiplica.
 *                   Guarda el ultimo valor quedando -> 3! = 3*2*1 = 6.
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
 * \param Llama a la funcion sum y guarda el resultado en la variable suma.
 * \param Llama a la funcion res y guarda el resultado en la variable resta.
 * \param Llama a la funcion multiplication y guarda el resultado en la variable mul.
 * \param Llama a la funcion division y guarda el resultado en la variable div.
 * \param Llama a la variable factorial y guarda el resultado en la variable fact.
 * \param Guarda los resultado de las variables(suma,resta,mul,div y fact) en la variable resultado.
 * \return Devuelve el valor de la variable resultado.
 */

float operations (float a,float b,int e)
{
    float resultado;
    float suma = sum(a,b);
    float resta = rest(a,b);
    float mul = multiplication(a,b);
    float div = division(a,b);
    int fact = factorial(e);
    resultado = suma + resta + mul + div + fact;
    return resultado;
}

/** \brief Valida que el numero del factorial no sea negativo
 * \param Si el numero es menor a 0, le dice al usuario que no se existen los factoriales negativos
 *          y le pregunta si quiere reingresar el numero.
 * \param   Se scanea/guarda la respuesta del usuario en la variable B.
 * \param   Si la respuesta es positiva se le pide al usuario reingresar el numero y se guarda el numero en la variable A.
 * \param   Se guarda A en la variable VALIDACION.
 * \param   Si el usuario elige no cambiar el numero, el programa le devuelve un ERROR y se finalza el mismo.
 * \param   Si el numero ingresado (A) es mayor o igual a 0 , se guarda el numero en la variable VALIDACION.
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
 * \param Verifica que el numero ingresado sea distinto de CERO, en caso de serlo muestra ERROR y
            pregunta sobre un reingrese del numero.
* \param   Se escanea/guarda la respuesta de la pregunta en B.
 * \param  Si la respuesta es positiva se pide el reingreso del numero y se guarda el mismo en la variable A.
 * \param  Se guarda la variable A en la variable VALIDACION.
 * \param  Si la respuesta es negativa se muestra un mensaje de ERROR y se finaliza el programa.
 * \param  Si el numero ingresado es distinto de CERO se guarda el numero de la variable A en la variable VALIDACION.
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
            printf("\nSystem.Error\a");

        }
    }
    else
    {
        validation = a;
    }

    return validation;
}

