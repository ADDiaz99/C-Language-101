/*
Fichero fuente 1 - funcion principal
*/
#include <stdio.h>

/*Declaracion de funciones*/
int max(int x, int y);

main() /*Funcion principal*/
{
    int a = 0, b = 0, c = 0; /*input de variables*/
    int mayor = 0;

    printf("Valores a, b y c: ");
    scanf("%d %d %d", &a, &b, &c);

    mayor = max(a, b);  /*Mayor entre a y b*/
    mayor = max(mayor, c); /*Mayor del resultado anterior y c*/
    printf("Mayor = %d\n", mayor);
}
