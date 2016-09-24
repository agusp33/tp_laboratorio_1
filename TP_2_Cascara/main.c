#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define LONGITUD 5

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona agregarPersona[LONGITUD];
    int i, hasta18=3, de19a35=5, mayorDe35=7, flag=0, mayor;

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
                ordenarNombre(agregarPersona,LONGITUD);
                break;
            case 4:
                if(hasta18 >= de19a35 && hasta18 >= mayorDe35)
                    {
                    mayor = hasta18;
                    }
                    else
                    {
                    if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
                    {
                        mayor = de19a35;
                    }
                    else
                    {
                    mayor = mayorDe35;
                    }
                    }
                    for(i=mayor; i>0; i--){
                    if(i<10)
                    {
                        printf("%02d|",i);
                    }
                    else
                        printf("%02d|",i);

                    if(i<= hasta18)
                    {
                        printf("*");
                    }
                    if(i<= de19a35)
                    {
                        flag=1;
                        printf("\t*");
                    }
                    if(i<= mayorDe35)
                    {
                        if(flag==0)
                            printf("\t\t*");
                        if(flag==1)
                            printf("\t*");

                    }
                    //Bajo una linea luego de cada iteracion
                    printf("\n");
                }
                printf("--+-----------------");
                printf("\n  |<18\t19-35\t>35");
                printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);
            case 5:
                seguir = 'n';
                break;
            }
    }
 return 0;
}
