#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "misFunciones.h"
#define CLS "CLS"
#define PAUSE "PAUSE"



int main()
{

    menuPresentacion();
    system(PAUSE);


    int X, Y;
    int A = 0,B = 0,C = 0,F = 0;
    int seleccion = 0, total = 0, valor = 1;
    char valorA[30];
    char valorB[30];
    int numerovalidoA, numerovalidoB;

    do
    {
        system(CLS);


        Menu();
        scanf("%d", &seleccion);


        switch(seleccion)
        {

        case 1 :

            X = validacionA(valorA, numerovalidoA);
            system(PAUSE);
            break;

        case 2 :
            Y = validacionB(valorB, numerovalidoB);
            system(PAUSE);
            break;


        case 3 :
            suma(X, Y, total);

            system(PAUSE);
            break;



        case 4 :
            resta(X, Y, total);

            system(PAUSE);
            break;


        case 5 :

            division(X,Y);

            system(PAUSE);
            break;


        case 6 :
            multiplicacion(X, Y, total);

            system(PAUSE);
            break;

        case 7 :
            F = factorial(X);
            printf("Factorial del valor %d = %d\n",X, F);
            system(PAUSE);

            break;

        case 8 :
            suma(X, Y, total);
            resta(X, Y, total);
            division(X,Y);
            multiplicacion(X, Y, total);
            F = factorial(X);
            printf("Factorial de %d = %d\n",X, F);
            system(PAUSE);
            break;

        case 9 :
            break;

        default :
            printf("Opcion incorrecta, ingresar entre (1 - 9) \n");
            system(PAUSE);
            break;
        }
        C++;

    }
    while(seleccion != 9);


    return 0;
}

