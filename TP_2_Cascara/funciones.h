#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Verifica si el valor obtenido son solo letras.
 * @param array de cadena a ser analizado.
 * @return devuelve 1 en caso de ser letra y 0 en caso de ser otra cosa.
 */
int validarLetras(char soloLetras[]);

/**
 * Verifica si el valor obtenido son solo numeros
 * @param array de cadena a ser analizado.
 * @return devuelve 1 en caso de ser numero y 0 en caso de ser otra cosa.
 */
int validarNumeros(char soloNumeros[]);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param largo del array lista.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[], int longitud,int a);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param largo del array lista.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[],int longitud, int dni);

/**
 * Array de personas que crea el usuario.
 *@param array a usarse.
 *@param largo del array.
 */
void addPerson(EPersona arrayPersona[],int largo);

/**
 * Array que borra personas.
 *@param array a usarse.
 *@param largo del array.
 *@return devuelve el valor de -1 o 0
 */
int deletePerson(EPersona arrayPersona[],int largo);

/**
 * Array que ordena datos por nombre
 *@param array a usarse.
 *@param largo del array.
 */
void ordenarNombre(EPersona arrayPersona[],int largo);

#endif // FUNCIONES_H_INCLUDED
