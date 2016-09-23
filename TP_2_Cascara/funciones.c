#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void arrayPeople(EPersona arrayPersonas[], int longitud, int a)
{
    int i;
    for(i=0;i<longitud;i++)
    {
        arrayPersonas[i].estado=a;
    }
}
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
//void functionGraph()
//{
//     int i, hasta18=3, de19a35=5, mayorDe35=7, flag=0, mayor;
//
//    if(hasta18 >= de19a35 && hasta18 >= mayorDe35){
//        mayor = hasta18;
//    }else{
//        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
//        {
//            mayor = de19a35;
//        }
//        else{
//        mayor = mayorDe35;
//        }
//    }
//
//    for(i=mayor; i>0; i--){
//        if(i<10){
//            printf("%02d|",i);
//        }
//        else
//            printf("%02d|",i);
//
//        if(i<= hasta18){
//            printf("*");
//        }
//        if(i<= de19a35){
//            flag=1;
//            printf("\t*");
//        }
//        if(i<= mayorDe35){
//            if(flag==0)
//                printf("\t\t*");
//            if(flag==1)
//                printf("\t*");
//
//        }
//        //Bajo una linea luego de cada iteracion
//        printf("\n");
//    }
//    printf("--+-----------------");
//    printf("\n  |<18\t19-35\t>35");
//    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);
//}

