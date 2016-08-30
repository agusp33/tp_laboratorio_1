#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x,y;
    float s,r,d,m,f;
    float valY,valCero;
    char validacionY;
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese 1\147 numero: ");
                scanf("%f",&x);
                break;
            case 2:
                printf("Ingrese 2\147 numero: ");
                scanf("%f",&y);
                valY = validacionCero(y,validacionY);
                printf("%f",valY);
                break;
            case 3:
                s = sum(x,y);
                printf("%f",s);
                break;
            case 4:
                r = rest(x,y);
                printf("%f",r);
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
