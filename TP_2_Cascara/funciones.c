#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define NUM 2

int addPerson()
{
    EPersona arrayAgregarPersona[NUM];
    int i;
    for(i=0;i<NUM;i++)
    {
          printf("\nIngrese nombre: ");
          scanf("%s",arrayAgregarPersona[i].nombre);
//        fflush(stdin);
//        printf("Ingrese edad: ");
//        scanf("%d",&arrayAgregarPersona[i].edad);
//        fflush(stdin);
//        printf("Ingrese DNI: ");
//        scanf("%d",&arrayAgregarPersona[i].dni);
//        fflush(stdin);
          printf("Ingrese estado(Alta[1]/Baja[0]): ");
          scanf("%d",&arrayAgregarPersona[i].estado);
    }
    return 0;
}

int deletePerson(addPerson(),EPersona arrayAgregarPersona[])
{
    arrayAgregarPersona[NUM];
    int i;
    char auxNombre[50];
    char auxRespuesta;
    printf("Ingrese Nombre: ");
    scanf("%s",auxNombre);
    for(i=0;i<NUM;i++)
    {
        if(arrayAgregarPersona[i].nombre == auxNombre)
        {
            printf("Desea borrar a la persona? s/n: ");
            getc(auxRespuesta);
            if(auxRespuesta == 's')
            {
                arrayAgregarPersona[i].estado = -1;
            }
            else
            {
                printf("Cancelando...");
            }
        }
        else
        {
            arrayAgregarPersona[i].estado = 1;
        }

    }

    return arrayAgregarPersona[i].estado;
}

