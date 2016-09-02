#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno,numeroDos,x,y;
    float suma,resta,mult,div;
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
                numeroUno = getNumber(x);
                printf("---------------------------\n");
                break;
            case 2:
                numeroDos = getNumber(y);
                printf("---------------------------\n");
                break;
            case 3:
                suma = sum(numeroUno,numeroDos);
                printf("La suma es: %f\n",suma);
                printf("---------------------------\n");
                break;
            case 4:
                resta = rest(numeroUno,numeroDos);
                printf("La resta es: %f\n",resta);
                printf("---------------------------\n");
                break;
            case 5:
                div = division(numeroUno,numeroDos);
                printf("La division es: %f\n",div);
                printf("---------------------------\n");
                break;
            case 6:
                mult = multiplication(numeroUno,numeroDos);
                printf("La multiplicacion es: %f\n",mult);
                printf("---------------------------\n");
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
