#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define LONGITUD 1

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona agregarPersona[LONGITUD];


    obtenerEspacioLibre(agregarPersona,20,-1);
    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                addPerson(agregarPersona,LONGITUD);
                break;
            case 2:
                deletePerson(agregarPersona,LONGITUD);
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
