
void Menu()
{


    printf("1-SUMAR \n");

    printf("2-RESTAR \n");

    printf("3-MULTIPLICAR \n");

    printf("4-DIVIDIR \n");

    printf("5-CALCULAR FACTORIAL \n");

    printf("6-TODOS LOS CALCULOS \n");

    printf("7-SALIR \n");
}

int validacionNumA(char numeroA[50])
{

    printf("ingrese numero : ");
    gets(numeroA);


    int i=0, sw=0, j;

    j=strlen(numeroA);

    while(i<j && sw==0)
    {

        if(isdigit(numeroA[i]) !=0)
        {

            i++;
        }
        else
        {

            sw=1;
        }


                if(sw == 0){
                    
                }




    }


    return sw;


}


int validacionNumB(char numeroB[50])
{

   // printf("ingrese numero 2: ");
    gets(numeroB);


    int i=0, sw=0, j;

    j=strlen(numeroB);

    while(i<j && sw==0)
    {

        if(isdigit(numeroB[i]) !=0)
        {

            i++;
        }
        else
        {

            sw=1;
        }

                if(sw == 0){
                    
                }



    }


    return sw;


}

int suma(int A, int B, int total)
{

    total = A + B;


    return total;

}

int resta(int A, int B, int total)
{

    total = A - B;

    return total;

}

int multiplicacion(int A, int B, int total)
{


    total = A * B;


    return total;


}

float division(float A, float B, float total)
{


    total = A / B;

    return total;

}


int factorial(int A, int valor)
{

    printf("ingrese un valor para calcular !F : ");
    scanf("%d", &A);

    valor = 1;

    for(int i = A; i > 0; i--)
    {

        valor = valor * i;

    }


    return valor;
}

void mostrarResultados(int A, int B, int resultadoSuma, int resultadoResta, int resultadoMultiplicacion, int resultadoDivision, int resultadoFactorial)
{


    printf("%d + %d = %d \n", A, B, resultadoSuma);
    printf("%d - %d = %d \n", A, B, resultadoResta);
    printf("%d x %d = %d \n", A, B, resultadoMultiplicacion);
    printf("%d / %d = %f \n", A, B, resultadoDivision);
    printf("!F DEL VALOR %d = %d \n", A, resultadoFactorial);



}
