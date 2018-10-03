#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "ArrayEmployees.h"
#define TAM 4

int main()
{

    char seguir='s';
    int flag=0;
    int opcion;

    Employee empleado[TAM];
    eSector sectores[]=
    {
        {1,"RRHH"},
        {2,"Ventas"},
        {3,"Compras"},
        {4,"Contable"},
        {5,"Sistema"}

    };
    initEmployees(empleado,TAM);

    do
    {

        switch(menu())
        {
        case 1:
            flag=1;
            addEmployee(empleado,TAM,sectores,5);
            system("pause");
            break;
        case 2:
            if(flag==1)
            {
                modificarEmpleado(empleado,TAM,sectores,5);
                system("pause");
            }
            else
            {
                printf("ERROR\n");
            }
            break;

        case 3:
            if(flag==1)
            {
                bajaEmpleado(empleado,TAM,sectores,5);
                system("pause");
            }
            else
            {
                printf("ERROR , ingrese un empleado");
            }
            break;

        case 4:
            if(flag==1)

            {
                printf("1.Listado de los empleados ordenados alfabeticamente por Apellido y Sector.\n");
                printf("2.Total y promedio de los salarios, y cuántos empleados superan el salario promedio.\n");

                printf("\ningrese una opcion:");
                scanf("%d",&opcion);

                while(opcion<1 || opcion>2 )
                {
                    printf("ingrese una opcion correcta:");
                    scanf("%d",&opcion);
                }
                if(opcion==1)
                {
                    ordenarEmpleados(empleado,TAM,sectores,5);
                    mostrarEmpleados(empleado,TAM,sectores,5);
                    system("pause");
                    break;
                }
                else if(opcion==2)
                {

                }
            }
            else
            {
                printf("ERROR , ingrese un empleado");
            }
            break;

        case 5:

            seguir='n';
            break;

        }
    }
    while(seguir=='s');

    return 0;
}
