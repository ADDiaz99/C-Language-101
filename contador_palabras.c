/*
contador_palabras.c
Este programa lee un texto y devuelve el numero de caracteres, palabras y lineas del mismo.
*/
#include <stdio.h>

main() //Funcion principal
{
    const int SI = 1;
    const int NO = 0;

    char car;
    int palabra = NO;
    int ncaracteres = 0, npalabras = 0, nlineas = 0;

    printf("Introducir el texto => ");
    printf("Pulse entrar despues de cada linea.\n");
    printf("Para finalizar introducir la marca EOF (Ctrl + Z).\n\n");

    while ((car = getchar()) != EOF)
    {
        ++ncaracteres; //Contador de caracteres

        // Eliminar blancos, tabuladores y finales de linea entre palabras
        if (car == ' ' || car == '\t' || car == '\n')
            palabra = NO;
        
        else if (palabra == NO)     //comienza una palabra
        {
            ++npalabras;            //contador de palabras
            palabra = SI;
        }

        if (car == '\n')            //finaliza una linea          
            ++nlineas;              //sube el contador de lineas

    }

    printf("Numero de caracteres: %d\nNumero de lineas: %d\nNumero de palabras: %d\n", ncaracteres, nlineas, npalabras);
}