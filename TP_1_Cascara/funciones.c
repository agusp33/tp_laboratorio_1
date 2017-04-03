#include "funciones.h"
/** \brief Suma entre dos numeros.
 * \param Variable del numero uno.
 * \param Variable del numero dos.
 * \return Resultado de la suma.
 */
float sum(float a,float b)
{
    float resultado = a+b;
    return resultado;
}
/** \brief Resta entre dos numeros.
 * \param Variable del numero uno.
 * \param Variable del numero dos.
 * \return Resultado de la resta.
 */
float rest(float a, float b)
{
    float resultado = a-b;
    return resultado;
}
/** \brief Multiplicacion de dos numeros.
 * \param Variable del numero uno.
 * \param Variable del numero dos.
 * \return Resultado de la multiplicacion.
 */
float multiplication(float a,float b)
{
    float resultado = a*b;
    return resultado;
}
/** \brief Division entre dos numeros.
 * \param Variable del numero uno.
 * \param Variable del numero dos.
 * \return Resultado de la division.
 */
float division(float a,float b)
{
    float resultado = a/b;
    return resultado;
}
/** \brief Pide el ingrese de un numero al usuario y lo retorna.
 * \return Numero ingresado por el usuario.
 */
float getNumber()
{
    float a;
    printf("Ingrese numero: ");
    scanf("%f",&a);
    return a;
}
/** \brief Calcula el factorial de un numero.
 * \param Variable del numero a calcular.
 * \return Valor del factorial del numero ingresado.
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
/** \brief Resolucion y muestra de operaciones matematicas.
 * \param Variable del numero uno.
 * \param Variable del numero dos.
 * \return Retorna por pantalla el resultado de las operaciones.
 */
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
/** \brief Validacion factorial.
 * \param Numero a validar.
 * \return Numero validado.
 */
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
/** \brief Validacion division por cero.
 * \param Numero a validar.
 * \return Numero validado.
 */
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
