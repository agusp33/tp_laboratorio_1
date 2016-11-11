#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"
#include "libreria.h"

/** \brief Muestra por pantalla un menu de opciones.
 * \return Retorna la opcion elegida.
 */
int menu()
{
    int option;
    printf("1-Agregar pelicula\n");
    printf("2-Borrar pelicula\n");
    printf("3-Modificar pelicula\n");
    printf("4-Generar archivo\n");
    printf("5-Generar pagina web\n");
    printf("6-Salir\n");
    scanf("%d",&option);
    return option;
}

/** \brief Realiza el alta de un elemento del array peliculas
 * \param Puntero a array de peliculas
 * \param Cantidad de elementos del array
 * \return Retorna 1 si se pudo hacer el alta y 0 si no se pudo.
 */
int movie_add(sMovie *video,int array_elements)
{
    char auxGenero[50],auxDuracion[50],auxPuntaje[50];
    int index;
    index=movie_searchEmptySpace(video,array_elements,0);
    if(index==-1)
    {
        printf("No hay lugar.\n");
    }
    else
    {
        get_String("Ingrese titulo: ",video[index].titulo);
        while(!get_StringLetters("Ingrese genero: ",auxGenero))
        {
            printf("Ingrese solo letras.\n");
        }
        while(!get_StringNumbers("Ingrese duracion: ",auxDuracion))
        {
            printf("Ingrese solo numeros.\n");
        }
        get_String("Ingrese sinopsis: ",video[index].descripcion);
        while(!get_StringNumbers("Ingrese el puntaje: ",auxPuntaje))
        {
            printf("Ingrese solo numeros.\n");
        }
        get_String("Ingrese direccion URL: ",video[index].linkImagen);
        strncpy(video[index].genero,auxGenero,100);
        video[index].puntaje=atoi(auxPuntaje);
        video[index].duracion=atoi(auxDuracion);
        video[index].estado=1;
        return 1;
    }
    return 0;
}

/** \brief Realiza la baja logica de un elemento del array peliculas
 * \param Puntero a array de peliculas
 * \param Cantidad de elementos del array
 * \return Retorna 1 si se pudo hacer el alta y 0 si no se pudo.
 */
int movie_remove(sMovie *video,int array_elements)
{
    int index,indexAux;
    char auxTitulo[50];
    indexAux=movie_searchEmptySpace(video,array_elements,1);
    if(indexAux == -1)
    {
        printf("Ingrese peliculas primero.\n");
    }
    else
    {
        while(!get_StringLetters("Ingrese el titulo de la pelicula: ",auxTitulo))
        {
            printf("Solo letras por favor.\n");
        }
        index=movie_search(video,array_elements,auxTitulo);
        if(index == -1)
        {
            printf("La pelicula no existe.\n");
        }
        else
        {
            video[index].estado=0;
            printf("\nPelicula eliminada: %s",video[index].titulo);
            return 1;
        }
    }
    return 0;
}

/** \brief Realiza la modificacion de una pelicula
 * \param Puntero a array de peliculas
 * \param Cantidad de elementos del array
 * \return Retorna 1 si se pudo hacer el alta y 0 si no se pudo.
 */
int movie_modify(sMovie *video,int array_elements)
{
    int index,indexAux;
    char auxTitulo[50],auxGenero[50],auxDuracion[50],auxPuntaje[50];
    indexAux=movie_searchEmptySpace(video,array_elements,1);
    if(indexAux == -1)
    {
        printf("Ingresar peliculas primero.\n");
    }
    else
    {
        while(!get_StringLetters("Ingrese pelicula a modificar: ",auxTitulo))
        {
            printf("Solo letras por favor.\n");
        }
        index=movie_search(video,array_elements,auxTitulo);
        if(index == -1)
        {
            printf("La pelicula no existe.\n");
        }
        else
        {
            get_String("Ingrese titulo: ",video[index].titulo);
            while(!get_StringLetters("Ingrese genero: ",auxGenero))
            {
                printf("Ingrese solo letras.\n");
            }
            while(!get_StringNumbers("Ingrese duracion: ",auxDuracion))
            {
                printf("Ingrese solo numeros.\n");
            }
            get_String("Ingrese sinopsis: ",video[index].descripcion);
            while(!get_StringLetters("Ingrese el puntaje: ",auxPuntaje))
            {
                printf("Ingrese solo numeros.\n");
            }
            get_String("Ingrese direccion URL: ",video[index].linkImagen);
            strncpy(video[index].genero,auxGenero,100);
            video[index].puntaje=atoi(auxPuntaje);
            video[index].duracion=atoi(auxDuracion);
            return 1;
        }
    }
    return 0;
}
/** \brief Inicializa todos los elementos del array en un mismo valor
 * \param Puntero a array de peliculas.
 * \param Cantidad de elementos del array
 * \param El valor en el que los elementos seran inicializados
 */
void movie_initializer(sMovie *video,int array_elements,int input)
{
    int i;
    for(i=0; i<array_elements; i++)
    {
        video[i].estado=input;
    }
}

/** \brief Busca peliculas por nombre/titulo.
 * \param Puntero a array de peliculas
 * \param Cantidad de elementos del array
 * \param Nombre de la pelicula a buscar
 * \return Retorna la posicion de la pelicula en el array , en caso contrario devuelve -1.
 */
int movie_search(sMovie *video,int array_elements,char input[])
{
    int i;
    for(i=0; i<array_elements; i++)
    {
        if((video[i].estado==1) && (strcmp(video[i].titulo,input)==0))
        {
            return i;
        }
    }
    return -1;
}

/** \brief Busca el primer lugar libre en el array.
 * \param Puntero a array de peliculas.
 * \param Cantidad de elementos del array.
 * \param Valor para indicar que la posicion del array se encuentra vacia.
 * \return Retorna la posicion del array , en caso de que no se pueda devuelve -1.
 */
int movie_searchEmptySpace(sMovie *video,int array_elements,int input)
{
    int i;
    for(i=0; i<array_elements; i++)
    {
        if(video[i].estado==input)
        {
            return i;
        }
    }
    return -1;
}

/** \brief Genera un archivo html
 * \param Puntero a array de peliculas
 * \param Cantidad de elementos del array
 */
int movie_generateHTML(sMovie *video,int array_elements)
{
    int i;
    FILE *archivo;
    archivo=fopen("Trabajo Practico 3.html","w");
    if(archivo != NULL)
    {
        fprintf(archivo,"<!DOCTYPE html><html>");
        for(i=0; i<array_elements; i++)
        {
            if(video[i].estado == 1)
            {
                fprintf(archivo,"<body><h1>Titulo: %s </h1>\n\n<h2>Genero: %s</h2>\n\n<h3>Puntaje: %d </h3>\n\n<p>Sinopsis: %s \n\n\n\n</p><img src=%s style='width:304px;height:228px;'>",video[i].titulo,video[i].genero,video[i].puntaje,video[i].descripcion,video[i].linkImagen);
            }
        }
        fprintf(archivo,"</body></html>");
        fclose(archivo);
        return 1;
    }
    return 0;
}

/** \brief Genera un archivo binario
 * \param Puntero a array de peliculas
 * \param Cantidad de elementos del array
 */
int movie_generateFile(sMovie *video)
{
    FILE* archivo;
    archivo=fopen("TP3.dat","ab+");
    if(archivo==NULL)
    {
        printf("Error al abrir archivo.");
    }
    else
    {
        fwrite(video,sizeof(sMovie),1,archivo);
        fclose(archivo);
        return 1;
    }
    return 0;
}

