#include "funciones.h"
int main()
{
    char seguir='s';
    int opcion=0;
    int entero,fact;
    float numeroUno,numeroDos;
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
                numeroUno = getNumber();
                printf("---------------------------\n");
                break;
            case 2:
                numeroDos = getNumber();
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
                div = division(numeroUno,validationCeroDivition(numeroDos));
                printf("La division es: %f\n",div);
                printf("---------------------------\n");
                break;
            case 6:
                mult = multiplication(numeroUno,numeroDos);
                printf("La multiplicacion es: %f\n",mult);
                printf("---------------------------\n");
                break;
            case 7:
                entero = (int)numeroUno;
                fact = factorial(validationFactorial(entero));
                printf("El factorial del numero %d es: %d\n",entero,fact);
                printf("---------------------------\n");
                break;
            case 8:
                operations(numeroUno,numeroDos);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
