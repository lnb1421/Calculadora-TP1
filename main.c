#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"
#define CLS "CLS"
#define PAUSE "PAUSE"



int main()
{

    int A = 0,B = 0,C = 0;
    int seleccion = 0, total = 0, valor = 1;
    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoMultiplicacion = 0;
    float resultadoDivision = 0;
    int resultadoFactorial = 0;
    int sw, valA, valB;
    char numeroA[50];
    char numeroB[50];







    while(seleccion != 7)
    {



        system(CLS);


        Menu();
        scanf("%d", &seleccion);
        system(CLS);


        if(seleccion == 7)
        {

            break;
        }

        printf("ingrese un valor : ");
        scanf("%d", &A);

        printf("ingrese el segundo valor : ");
        scanf("%d", &B);



        //validacionNumA(numeroA, A);
        //validacionNumB(numeroB, B);


        switch(seleccion)
        {

        case 1 :
            suma(A, B, total);

            system(PAUSE);
            break;

        case 2 :
            resta(A, B, total);


            system(PAUSE);
            break;

        case 3 :
            multiplicacion(A, B, total);


            system(PAUSE);
            break;



        case 4 :
            division( A, B,total);

            system(PAUSE);
            break;


        case 5 :
            factorial(A, valor);


            system(PAUSE);
            break;


        case 6 :
            suma(A, B, total);
            resta(A, B, total);
            multiplicacion(A, B, total);
            division(A, B, total);
            factorial(A, valor);

            system(PAUSE);
            break;


        }

        C++;

    }


    return 0;
}

