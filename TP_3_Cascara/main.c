#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"
#include "libreria.h"
#define QTY_MOVIE 10

int main()
{
    sMovie movies[QTY_MOVIE];
    movie_initializer(movies,QTY_MOVIE,0);

    int opcion=0;

    while(opcion !=6)
    {
        opcion=menu();
        switch(opcion)
        {
        case 1:
            if(movie_add(movies,QTY_MOVIE)==1)
            {
                printf("\nPelicula ingresada correctamente.\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nNo se pudo ingresar la pelicula.\n");
            }
            break;
        case 2:
            if(movie_remove(movies,QTY_MOVIE)==1)
            {
                printf("\nPelicula eliminada.\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nNo se pudo eliminar la pelicula.\n");
            }
            break;
        case 3:
            if(movie_modify(movies,QTY_MOVIE)==1)
            {
                printf("\nPelicula Modificada.\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nNo se puedo modificar pelicula.\n");
            }
            break;
        case 4:
            if(movie_generateFile(movies)==1)
            {
                printf("\nArchivo generado.\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nNo se puedo generar el archivo.\n");
            }
            break;
        case 5:
            if(movie_generateHTML(movies,QTY_MOVIE)==1)
            {
                printf("Se genero la pagina web.\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nNo se pudo generar la pagina web.\n");
            }
            break;
        case 6:
            opcion = 6;
            break;
        default:
            printf("Opcion invalida.");
            break;
        }
    }
    return 0;
}
