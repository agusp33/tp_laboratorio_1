#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define LONGITUD 5

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona agregarPersona[LONGITUD];
    char auxNombreApellido[100];
    int auxEdad;
    int auxDni;
    int auxEstado;
    int lugarlibre;

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
                break;
            case 2:

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
