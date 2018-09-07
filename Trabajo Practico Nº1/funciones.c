#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float suma (float X ,float Y)
{
    float resultado;
    resultado= X+Y;
    return resultado;

}
float resta (float X, float Y)
{
    float resultado;
    resultado= X-Y;
    return resultado;
}
float multiplicacion(float X, float Y)
{
    float resultado;
    resultado= X*Y;
    return resultado;
}

float division (float X, float Y)
{
    float resultado;
    resultado=(float)X/Y;
    return resultado;
}

int factorial(int X)
{
    int factorial =1;
    int contador;
    for(contador = 1; contador <= X; contador++)
        {
        factorial = factorial * contador;
        }
    return factorial;
}

float validarLaDivision(float X , float Y)
{
  if(Y==0)
    {
        printf("ERROR, no se puede dividir por cero");

    }else if(X<Y)
    {
        printf("ERROR, no se puede realizar esta division");
    }else
    {
        printf("la division es :%.2f",division(X,Y));
    }
}

int validarElRango(int  opcion, int desde, int hasta)
{
    int resultado=0;
    if((opcion >= desde)&&(opcion <= hasta))
        {
            resultado = 1;
        }
    return resultado;
}


