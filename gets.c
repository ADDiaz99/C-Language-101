/*
gets.c
Leer cadena de caracteres con la funcion gets
*/

#include <stdio.h>

main()
{
    char *c = NULL;     //Para almacenar el valor retornado por gets
    char texto[80];

    printf("Introducir lineas de texto.\n");
    printf("Para finalizar introduce la marca EOF\n\n");

    //leer la primera linea de texto
    c = gets(texto);
    while (c != NULL)
    {
        //Operaciones con la lunea de texto leida
        //...
        //Leer otra linea de texto 
        c = gets(texto);
    }
}
