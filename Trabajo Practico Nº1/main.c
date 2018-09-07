#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <stdio.h>
int main()
{
    float X=0;
    float Y=0;
    char seguir='s';
    int opcion=0;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorialX;
    float resultadoFactorialY;
    int flagX = 0;
    int flagY = 0;

     while(seguir =='s')
    {
        system("cls");
        printf("1. Ingrese 1er operando (X=%.2f)\n",X);
        printf("2. Ingrese 2do operando (Y=%.2f)\n",Y);
        printf("3. Calcular todas las operaciones \n");
        printf("4. Mostrar todos los resultados \n");
        printf("5. Salir\n");

        scanf("%d",&opcion);

    switch (opcion)
    {
        case 1 :
                printf("ingrese un numero\n");
                scanf("%f",&X);
                flagX=1;
                system("pause");
                break;

        case 2 :
                printf("ingrese un segundo numero\n");
                scanf("%f",&Y);
                flagY=1;
                system("pause");
                break;

        case 3 :
            if(flagX == 1 && flagY == 1)
            {

                    resultadoSuma = suma(X,Y);
                    resultadoResta = resta(X,Y);
                    resultadoDivision = division(X,Y);
                    resultadoMultiplicacion =multiplicacion(X,Y);
                    resultadoFactorialX = factorial(X);
                    resultadoFactorialY = factorial(Y);

                printf("Se han realizado todas las operaciones.\n");
                system("pause");
            }else
            {
                printf("no se han ingresado los numeros para operar ");
                system("pause");
            }
            break;

        case 4 :

                printf("La Suma es :%.2f \n\n",resultadoSuma);
                printf("La Resta es :%.2f \n\n",resultadoResta);
                if(Y == 0)
            {
                printf("No es posible dividir por 0.\n");
            }   else
            {
                printf("El resultado de la division es: %.2f\n", resultadoDivision);
            }
                printf("La Multiplicacion es :%.2f \n\n",resultadoMultiplicacion);
                printf("El Factorial de X es :%.f\n\n ",resultadoFactorialX);
                printf("El Factorial de Y es :%.f\n\n ",resultadoFactorialY);

                system("pause");
                break;

        case 5:
                seguir='n';
                system("pause");
                break;

    }

    } while(seguir=='s');

    return 0;
}
