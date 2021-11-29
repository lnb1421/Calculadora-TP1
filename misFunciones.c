
void Menu()
{


    printf("1-SUMAR \n");

    printf("2-RESTAR \n");

    printf("3-MULTIPLICAR \n");

    printf("4-DIVIDIR \n");

    printf("5-FACTORIAL \n");

    printf("6-TODOS LOS CALCULOS \n");

    printf("7-SALIR \n");
}



}

int suma(int A, int B, int total)
{

    total = A + B;


     printf("%d + %d = %d \n", A, B, total);

}

int resta(int A, int B, int total)
{

    total = A - B;

    printf("%d + %d = %d \n", A, B, total);

}

int multiplicacion(int A, int B, int total)
{


    total = A * B;


    printf("%d + %d = %d \n", A, B, total);


}

float division(float A, float B, float total)
{
    printf("ingresar Dividendo : ");
    scanf("%f", &A);

    printf("ingresar Divisor : ");
    scanf("%f", &B);
    total = A / B;

    if(B == 0)
    {
        printf("valor erroneo!!! \n");

    }
    else
    {
      printf("Total division : %f \n ", total);
    }


    return total;

}


int factorial(int A, int valor)
{

    printf("ingrese un valor para calcular !F : \n ");
    scanf("%d", &A);

    valor = 1;

    for(int i = A; i > 0; i--)
    {

        valor = valor * i;

    }

     printf("!F DEL VALOR %d = %d \n", A, valor);
    return valor;
}





