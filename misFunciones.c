void menuPresentacion()
{

    printf("\n\n");
    printf(" |                         _____________________                         |\n");
    printf(" |                        |  _________________  |                        |\n");
    printf(" |                        | | GRUPO 7      10 | |                        |\n");
    printf(" |                        | |_________________| |                        |\n");
    printf(" |                        |  ___ ___ ___   ___  |                        |\n");
    printf(" |                        | | 7 | 8 | 9 | | + | |                        |\n");
    printf(" |                        | |___|___|___| |___| |                        |\n");
    printf(" |                        | | 4 | 5 | 6 | | - | |                        |\n");
    printf(" |                        | |___|___|___| |___| |                        |\n");
    printf(" |                        | | 1 | 2 | 3 | | x | |                        |\n");
    printf(" |                        | |___|___|___| |___| |                        |\n");
    printf(" |                        | | . | 0 | = | | / | |                        |\n");
    printf(" |                        | |___|___|___| |___| |                        |\n");
    printf(" |                        |_____________________|                        |\n");

    system("COLOR F0");

}


void Menu()
{
    system("COLOR F0");

    printf(     "*******************************************\n");
    printf(     "*******************************************\n");
    printf(     "*******************************************\n");
    printf(     "** 1 - Ingresar primer valor             **\n");
    printf(     "** 2 - Ingresar segundo valor            **\n");
    printf(     "** 3 - Calcular la suma (A+B)            **\n");
    printf(     "** 4 - Calcular la resta (A-B)           **\n");
    printf(     "** 5 - Calcular la division (A/B)        **\n");
    printf(     "** 6 - Calcular la multiplicacion (A*B)  **\n");
    printf(     "** 7 - Calcular el factorial (A!)        **\n");
    printf(     "** 8 - Calcular todas las operaciones    **\n");
    printf(     "** 9 - Salir                             **\n");
    printf(     "*******************************************\n");
    printf(     "*******************************************\n");
    printf(     "*******************************************\n");
}


int validacionA(char valorA[], int numerovalidoA)
{

    printf("ingrese 1er operando: ");
    scanf("%s", valorA);

    for(int i =0; i < strlen(valorA); i++)
    {

        if(!(isdigit(valorA[i])))
        {
            printf("Valor incorrecto ingresar solo numeros!. \n");
            return 0;

        }
        else
        {

            numerovalidoA=atoi(valorA);


        }
    }
    return numerovalidoA;
}

int validacionB(char valorB[], int numerovalidoB)
{

    printf("ingrese 2do operando : ");
    scanf("%s", valorB);

    for(int i =0; i < strlen(valorB); i++)
    {

        if(!(isdigit(valorB[i])))
        {
            printf("\Valor incorrecto ingresar solo numeros!. : \n");
            return 0;

        }
        else
        {

            numerovalidoB=atoi(valorB);


        }
    }
    return numerovalidoB;
}





int suma(int X, int Y, int total)
{

    total = X + Y;


    printf("%d + %d = %d \n", X, Y, total);

}

int resta(int X, int Y, int total)
{

    total = X - Y;

    printf("%d - %d = %d \n", X, Y, total);

}

int multiplicacion(int X, int Y, int total)
{


    total = X * Y;


    printf("%d * %d = %d \n", X, Y, total);


}
float division(int X, int Y)
{

    float A = X;
    float B = Y;
    if(Y == 0)
    {

        printf("Valor de divisor incorrecto!. \n ");

    }
    else
    {

        float total = A / B;

        printf("%d / %d = %f \n", X, Y, total);

    }

}


int factorial(int X)
{
    int nro = X;
    int total;

    if(nro== 1)
    {

        return 1;

    }
    total = nro * factorial(nro - 1);
    return total;



}






