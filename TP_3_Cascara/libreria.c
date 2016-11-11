#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"
#include "libreria.h"

/** \brief Obtiene un vector de caracteres.
 * \param output es el mensaje a imprir por pantalla.
 * \param input es donde será guardado el mensaje.
 */
void get_String(char output[],char input[])
{
    printf("%s",output);
    fflush(stdin);
    gets(input);
}

/** \brief Obtiene un caracter.
 * \param output es el mensaje a mostrar por pantalla.
 * \return el numero ingresado.
 */

char get_Char(char output[])
{
    char input;
    printf("%s",output);
    fflush(stdin);
    scanf("%c",&input);
    return input;
}

/** \brief Obtiene un numero flotante
 * \param output es el mensaje a mostrar por pantalla
 * \return el numero flotante ingresado
 */

float get_Float(char output[])
{
    float input;
    printf("%s",output);
    scanf("%f",&input);
    return input;
}

/** \brief Obtiene un numero entero.
 * \param output es el mensaje a mostrar por pantalla.
 * \return el numero entero ingresado.
 */

int get_Int(char output[])
{
    int input;
    printf("%s",output);
    scanf("%d",&input);
    return input;
}
/** \brief Solicita un vector de caracteres y lo valida.
 * \param output es el mensaje a ser mostrado por pantalla.
 * \param input es donde el carcater es guardado.
 * \return retorna 1 si se obtiene la cadena y 0 si no se pudo.
 */

int get_StringLetters(char output[],char input[])
{
    char aux[256];
    get_String(output,aux);
    if(val_Letter(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/** \brief Solicita un vector numerico y lo valida.
 * \param output es el mensaje a ser mostrado por pantalla.
 * \param input es donde el carcter es guardado.
 * \return retorna 1 si se obtiene la cadena y 0 si no se pudo..
 */

int get_StringNumbers(char output[],char input[])
{
    char aux[256];
    get_String(output,aux);
    if(val_Number(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/** \brief Valida un vector de letras.
 * \param string es el vector ingresado por el usuario.
 * \return retorna 1 si pasa la validacion y 0 en caso de no pasarla.
*/

int val_Letter(char string[])
{
    int i=0;
    while(string[i]!= '\0')
    {
        if((string[i]!=' ')&&(string[i]< 'a' || string[i]>'z')&&(string[i]<'A' || string[i]>'Z'))
            return 0;
        i++;
    }
    return 1;
}

/** \brief Valida un vector de numeros.
 * \param string es el vector ingresado por el usuario.
 * \return retorna 1 si pasa la validacion y 0 en caso de no pasarla.
*/

int val_Number(char string[])
{
    int i=0;
    while(string[i]!= '\0')
    {
        if(string[i]<'0' || string[i]>'9')
            return 0;
        i++;
    }
    return 1;
}
/** \brief Valida si la informacion ingresada se encuentra dentro de un rango.
 * \param value es el valor ingresado.
 * \param longMin es el valor más bajo permitido.
 * \param longMax el valor más alto permitido.
 * \return retorna 1 si pasa la validacion y 0 en caso de no pasarla.
*/

int val_Range(int value, int longMin, int longMax)
{
    if(value < longMin || value >longMax)
    {
        return 0;
    }
    return 1;
}
/** \brief Pide que se ingrese un valor numerico y valida que se encuentre dentro del rango.
 * \param output es el mensaje que pide el numero.
 * \param input es el valor ingresado.
 * \param longMin es el limite inferior.
 * \param longMax es el  limite superior.
 * \return El numero ingresado.
 */

int val_Int(char output[],char input[],int longMin, int longMax)
{
    int auxInt;
    get_String(output,input);
    while(!val_Number(input))
    {
        printf("Ingresar solo numeros!!\n");
        get_String(output,input);
    }
    auxInt=atoi(input);
    if(val_Range(auxInt,longMin,longMax == 0))
    {
        printf("Numero fuera de rango!!\n");
        get_String(output,input);
    }
//    if(auxInt < lowLim || auxInt > highLim)
//    {
//        printf("Numero fuera de rango!!\n");
//        getString(output,input);
//    }
    return auxInt;
}
