#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#define CLS "CLS"

void menuPresentacion()
{
     system("COLOR 02");
    for(int i = 0; i < 5; i++)
{
        gotoxy(27,10);printf("CARGANDO CALCULADORA...");
        Sleep(1300);
        system(CLS);
}
      for(int i = 0; i < 240; i++)
{

        printf("0123456789");
        Sleep(1);

}
        system(CLS);



    gotoxy(36,2);printf("BIENVENIDO!");
    gotoxy(4,5); printf("                          _____________________                         \n");
    gotoxy(4,6); printf("                         |  _________________  |                        \n");
    gotoxy(4,7); printf("                         | | GRUPO 7      10 | |                        \n");
    gotoxy(4,8); printf("                         | |_________________| |                        \n");
    gotoxy(4,9); printf("                         |  ___ ___ ___   ___  |                        \n");
    gotoxy(4,10);printf("                         | | 7 | 8 | 9 | | + | |                        \n");
    gotoxy(4,11);printf("                         | |___|___|___| |___| |                        \n");
    gotoxy(4,12);printf("                         | | 4 | 5 | 6 | | - | |                        \n");
    gotoxy(4,13);printf("                         | |___|___|___| |___| |                        \n");
    gotoxy(4,14);printf("                         | | 1 | 2 | 3 | | x | |                        \n");
    gotoxy(4,15);printf("                         | |___|___|___| |___| |                        \n");
    gotoxy(4,16);printf("                         | | . | 0 | = | | / | |                        \n");
    gotoxy(4,17);printf("                         | |___|___|___| |___| |                        \n");
    gotoxy(4,18);printf("                         |_____________________|                        \n");



}


void Menu()
{
     system("COLOR 02");
    gotoxy(12,5); printf(                   "********************************************************\n");
    gotoxy(12,6); printf(                   "********************************************************\n");
    gotoxy(12,7); printf(                   "********************************************************\n");
    gotoxy(12,8); printf(                   "*****                                              *****\n");
    gotoxy(12,9); printf(                   "*****      1 - Ingresar primer valor               *****\n");
    gotoxy(12,10);printf(                   "*****      2 - Ingresar segundo valor              *****\n");
    gotoxy(12,11);printf(                   "*****      3 - Calcular la suma (A+B)              *****\n");
    gotoxy(12,12);printf(                   "*****      4 - Calcular la resta (A-B)             *****\n");
    gotoxy(12,13);printf(                   "*****      5 - Calcular la division (A/B)          *****\n");
    gotoxy(12,14);printf(                   "*****      6 - Calcular la multiplicacion (A*B)    *****\n");
    gotoxy(12,15);printf(                   "*****      7 - Calcular el factorial (A!)(MAX 33)  *****\n");
    gotoxy(12,16);printf(                   "*****      8 - Calcular todas las operaciones      *****\n");
    gotoxy(12,17);printf(                   "*****      9 - Salir                               *****\n");
    gotoxy(12,18);printf(                   "*****                                              *****\n");
    gotoxy(12,19);printf(                   "*****                                              *****\n");
    gotoxy(12,20);printf(                   "********************************************************\n");
    gotoxy(12,21);printf(                   "********************************************************\n");
    gotoxy(12,22);printf(                   "********************************************************\n");




}




int validacionA(char valorA[], int numerovalidoA)
{

    printf("ingrese 1er operando: ");
    scanf("%s", valorA);

    for(int i =0; i < strlen(valorA); i++)
    {

        if(!(isdigit(valorA[i])))
        {
            gotoxy(16,15); printf("|| Valor incorrecto ingresar solo numeros!. || \n");

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
           gotoxy(16,15); printf("|| Valor incorrecto ingresar solo numeros!. || \n");
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


void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y= y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void recuadro(int xs, int ys, int xi, int yi)
{
    for(int i = xs; i <= xi; i++)
    {

        gotoxy(i,ys); printf("%c",196);
        gotoxy(i,yi); printf("%c",196);

    }
    for(int i = ys; i <=yi; i++){

        gotoxy(xs,i); printf("%c",179);
        gotoxy(xi,i); printf("%c",179);


    }
        gotoxy(xs,ys); printf("%c", 218);
        gotoxy(xi,yi); printf("%c", 217);
        gotoxy(xi,ys); printf("%c", 191);
        gotoxy(xs,yi); printf("%c", 192);
}
