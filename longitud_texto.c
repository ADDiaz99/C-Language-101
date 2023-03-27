/*
longitud_texto.c
Lee y escribe la cantidad de caracteres
*/

#include <stdio.h>
#define LONG_CAD 41         //define matriz con capacidad maxima de 41

main()
{
    unsigned char cadena[LONG_CAD];     //matriz de LONG_CAD caracteres
    int i = 0, car;

    printf("Introducir un texto. ");
    while ((car = getchar()) != '\n' && i < LONG_CAD - 1) //Establecemos que el programa corra cuando el usuario de "Enter"
    {
        cadena[i] = car;
        i++;
    }
    //Finalizamos la cadena con 0
    cadena[i] = 0;

    printf("Texto introducido:  %s\n", cadena);
    printf("Longitud de texto:  %d\n", i);
}