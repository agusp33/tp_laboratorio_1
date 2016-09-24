#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int obtenerEspacioLibre(EPersona lista[], int longitud, int a)
{
    int i;
    for(i=0;i<longitud;i++)
    {
        if(lista[i].estado == a)
        {
            return a;
        }
    }
    return -1;
}

int buscarPorDni(EPersona lista[],int longitud, int dni)
{
    int i;
    int aux;
    for(i=0;i<longitud;i++)
    {
        if(lista[i].estado != -1)
        {
          if(lista[i].dni==dni)
            {
                aux=i;
            }
        }
    }
    return aux;
}

int validarLetras(char soloLetras[])
{
    int i=0;
        while(soloLetras[i] != '\0')
        {
           if((soloLetras[i] != ' ') && (soloLetras[i] < 'a' || soloLetras[i] > 'z') && (soloLetras[i] < 'A' || soloLetras[i] > 'Z'))
           {
               return 0;
           }
           i++;
        }
    return 1;
}

int validarNumeros(char soloNumeros[])
{
    int i=0;
        while(soloNumeros[i] != '\0')
        {
            if(soloNumeros[i] < '0' || soloNumeros[i] > '9')
            {
                return 0;
            }
            i++;
        }
        return 1;
}

void addPerson(EPersona arrayPersona[],int largo)
{
    int i;
    char nombre[50];
    char edad[25];
    char dni[100];
    char estado[25];
    for(i=0;i<largo;i++)
    {
    printf("Ingrese Nombre: ");
    fflush(stdin);
    validarLetras(gets(arrayPersona[i].nombre));
        while(validarLetras(arrayPersona[i].nombre)==0)
        {
            printf("Ingrese solo letras\n");
            printf("Reingrese nombre: ");
            gets(arrayPersona[i].nombre);
        }
    printf("Ingrese Edad: ");
    fflush(stdin);
    gets(edad);
        while(validarNumeros(edad)==0)
        {
            printf("Ingrese solo numeros\n");
            fflush(stdin);
            printf("Reingrese la edad: ");
            gets(edad);
            arrayPersona[i].edad = atoi(edad);
        }
    printf("Ingrese DNI: ");
    fflush(stdin);
    gets(dni);
        while(validarNumeros(dni)==0)
        {
            printf("Ingrese solo numeros\n");
            fflush(stdin);
            printf("Reingrese la edad: ");
            gets(dni);
            arrayPersona[i].dni = atoi(dni);
        }
    printf("Ingrese estado 1.Alta/0.Baja: ");
    fflush(stdin);
    gets(estado);
        while(validarNumeros(estado)==0)
        {
            printf("Ingrese solo numeros\n");
            fflush(stdin);
            printf("Reingrese la edad: ");
            gets(estado);
            arrayPersona[i].estado = atoi(estado);
        }
    }
}

int deletePerson(EPersona arrayPersona[],int largo)
{
    int i;
    int dni;
    int estado;
    char aux;
    for(i=0;i<largo;i++)
    {

        printf("ingrese DNI a borrar: ");
        scanf("%d",&dni);
//        buscarPorDni(arrayPersona,largo,dni);
        if(dni == arrayPersona[i].dni)
        {
            printf("¿Esta seguro que quiere borrar %d: ,s/n?",dni);
            scanf("%c",&aux);
            if(aux == 's')
            {
            arrayPersona[i].estado = -1;
            return arrayPersona[i].estado;
            }
            else
            {
                printf("Cancelando...");
            }
        }
        else
        {
            printf("No existe ese DNI\n");
        }
    }
    return 0;
}

void ordenarNombre(EPersona arrayPersona[],int largo)
{
    int i,j;
    EPersona auxiliar;
    for(i=0;i<largo-1;i++)
    {
        if(arrayPersona[i].estado == -1)
        {
            continue;
        }
        for(j=i+1;j<largo;j++)
        {
            if(arrayPersona[i].estado == -1)
            {
                continue;
            }
            if(strcmp(arrayPersona[i].nombre,arrayPersona[j].nombre)>0)
            {
                auxiliar=arrayPersona[i];
                arrayPersona[i]=arrayPersona[j];
                arrayPersona[j]=auxiliar;
            }
        }
    }
    for (i=0;i<largo;i++)
    {
        printf("%s\n",arrayPersona[i].nombre);
    }
}


