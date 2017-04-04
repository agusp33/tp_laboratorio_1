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
/** \brief Pide el ingrese de un numero al usuario.
 * \return Numero ingresado por el usuario.
 */
char getNumber()
{
    char a[25];
    char buffer[100];
    printf("Ingrese numero: ");
    scanf("%s",buffer);
    while(validationNumber(buffer) != 1)
    {
        printf("Error. Ingrese solo numeros, porfavor reingrese: ");
        scanf("%s",buffer);
    }
    *a = *buffer;
    return *a;
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
/** \brief Validacion de que el array sean solo numerico.
 * \param Variable (array) a validar/verificar.
 * \return 1 si son solo numeros y 0 si no lo son.
*/
int validationNumber(char cadena[])
{
   int pos=0;
   while(cadena[pos] != '\0')
   {
       if(cadena[pos] < '0' || cadena[pos] > '9')
           return 0;
       pos++;
   }
   return 1;
}
/** \brief Validacion de que el array sean solo letras.
 * \param Variable (array) a validar/verificar.
 * \return 1 si son solo letras y 0 si no lo son.
*/
int validationLetters(char cadena[])
{
   int pos=0;
   while(cadena[pos] != '\0')
   {
       if((cadena[pos] != ' ') && (cadena[pos] < 'a' || cadena[pos] > 'z') && (cadena[pos] < 'A' || cadena[pos] > 'Z'))
           return 0;
       pos++;
   }
   return 1;
}
/** \brief Validacion de que el array sea alfanumerico.
 * \param Variable (array) a validar/verificar.
 * \return 1 si lo es y 0 si no lo es.
*/
int validationNumberAndLetters(char cadena[])
{
   int pos=0;
   while(cadena[pos] != '\0')
   {
       if((cadena[pos] != ' ') && (cadena[pos] < 'a' || cadena[pos] > 'z') && (cadena[pos] < 'A' || cadena[pos] > 'Z') && (cadena[pos] < '0' || cadena[pos] > '9'))
           return 0;
       pos++;
   }
   return 1;
}
