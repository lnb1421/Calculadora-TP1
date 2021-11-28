#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"




int main()
{

    int A = 0,B = 0,C = 0;
    int seleccion = 0, total = 0, valor = 1;
    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoMultiplicacion = 0;
    int resultadoDivision = 0;
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



        if(seleccion == 7){

            break;
        }

        system(CLS);



        printf("ingrese un valor : ");
        scanf("%d", &A);

        printf("ingrese un segundo valor : ");
        scanf("%d", &B);



        //validacionNumA(numeroA, A);
        //validacionNumB(numeroB, B);

        switch(seleccion)
        {

        case 1 :
            resultadoSuma = suma(A, B, total);

            printf("%d + %d = %d \n", A, B, resultadoSuma);
            system(PAUSE);
            break;

        case 2 :
            resultadoResta = resta(A, B, total);

            printf("%d - %d = %d \n", A, B, resultadoResta);
            system(PAUSE);
            break;

        case 3 :
            resultadoMultiplicacion = multiplicacion(A, B, total);

            printf("%d x %d = %d \n", A, B, resultadoMultiplicacion);
            system(PAUSE);
            break;



        case 4 :
            resultadoDivision = division(A, B, total);

            printf("%d / %d = %.2f \n", A, B, resultadoDivision);
            system(PAUSE);
            break;


        case 5 :
            resultadoFactorial = factorial(A, valor);

            printf("!F = %d \n", resultadoFactorial);
            system(PAUSE);
            break;


        case 6 :
            resultadoSuma = suma(A, B, total);
            resultadoResta = resta(A, B, total);
            resultadoMultiplicacion = multiplicacion(A, B, total);
            resultadoDivision = division(A, B, total);
            resultadoFactorial = factorial(A, valor);

            mostrarResultados(A, B, resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision, resultadoFactorial);
            system(PAUSE);
            break;


        }

        C++;

    }


    return 0;
}

