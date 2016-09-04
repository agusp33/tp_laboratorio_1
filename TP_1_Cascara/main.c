#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    char respuestaFactorial,respuestaValCero;
    int opcion=0;
    int entero,fact,valFact;
    float numeroUno,numeroDos,x,y;
    float valCero;
    float suma,resta,mult,div,ope;


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
                valCero = validationCeroDivition(numeroDos,respuestaValCero);
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
                entero = (int)numeroUno+(int)numeroDos;
                valFact = validationFactorial(entero,respuestaFactorial);
                fact = factorial(valFact);
                printf("El factorial del numero %d es: %d\n",valFact,fact);
                printf("---------------------------\n");
                break;
            case 8:
                ope = operations(suma,resta,div,mult);
                entero = (int)numeroUno+(int)numeroDos;
                valFact = validationFactorial(entero,respuestaFactorial);
                fact = factorial(valFact);
                ope = ope + fact;
                printf("El resultado de todas las operaciones es: %f\n",ope);
                printf("---------------------------\n");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
