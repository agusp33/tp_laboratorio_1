#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int x,y;
    int suma, resta, multiplicacion, factorial=1, sumaFactorial;
    float division, operaciones;

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
                printf("Ingrese numero: ");
                scanf("%d",&x);
                break;
            case 2:
                printf("Ingrese numero: ");
                scanf("%d",&y);
                break;
            case 3:
                suma=x+y;
                printf("La suma de los operando es: %d\n\n",suma);
                break;
            case 4:
                resta=x-y;
                printf("La resta de los operando es: %d\n\n",resta);
                break;
            case 5:
                while(y==0)
                {
                    printf("Error... No se puede dividir por 0 \a\n");
                    printf("Reingrese segundo Operando: ");
                    scanf("%d",&y);
                }
                division=(float)x/y;
                printf("La division de los operando es: %f\n\n",division);
                break;
            case 6:
                multiplicacion=x*y;
                printf("La multiplicacion de los operando es: %d\n\n",multiplicacion);
                break;
            case 7:
                sumaFactorial = x+y;
              if(sumaFactorial<0)
                {
                printf("La suma no puede ser menor o igual a CERO");
                }
                else
                {
                    while(sumaFactorial>0)
                    {
                        factorial=sumaFactorial*factorial;
                        sumaFactorial--;
                    }
                }
                printf("El factorial de los operando es: %d\n\n",factorial);
                break;
            case 8:
                operaciones=suma+resta+division+multiplicacion+factorial;
                printf("El resultado de todas las operaciones es: %f\n\n",operaciones);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
