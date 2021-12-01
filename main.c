#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "misFunciones.h"
#define CLS "CLS"
#define PAUSE "PAUSE"



int main()
{

    system("mode con: cols=80 lines=30");
    menuPresentacion();
    recuadro(12,4,70,20);
    gotoxy(25,25); system(PAUSE);
    int X, Y, x, y;
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
             system(CLS);
            X = validacionA(valorA, numerovalidoA);
            gotoxy(25,25); system(PAUSE);
            break;

        case 2 :
            system(CLS);
            Y = validacionB(valorB, numerovalidoB);
            gotoxy(25,25); system(PAUSE);
            break;


        case 3 :
            system(CLS);
            suma(X, Y, total);
          gotoxy(25,25); system(PAUSE);
            break;



        case 4 :
            system(CLS);
            resta(X, Y, total);
            gotoxy(25,25); system(PAUSE);;
            break;


        case 5 :
            system(CLS);
            division(X,Y);
            gotoxy(25,25); system(PAUSE);
            break;


        case 6 :
            system(CLS);
            multiplicacion(X, Y, total);
            gotoxy(25,25); system(PAUSE);
            break;

        case 7 :
            system(CLS);
            F = factorial(X);
            printf("Factorial del valor %d = %d\n",X, F);
            gotoxy(25,25); system(PAUSE);

            break;

        case 8 :
            system(CLS);
            suma(X, Y, total);
            resta(X, Y, total);
            division(X,Y);
            multiplicacion(X, Y, total);
            F = factorial(X);
            printf("Factorial de %d = %d\n",X, F);
            gotoxy(25,25); system(PAUSE);
            break;

        case 9 :
            break;

        default :
            system(CLS);
            printf("Opcion incorrecta, ingresar entre (1 - 9) \n");
            gotoxy(25,25); system(PAUSE);
            break;
        }
        C++;

    }
    while(seleccion != 9);


    return 0;
}

