/*
matriz_03.c
Frecuencia con la que aparecen las letras en un texto
*/

#include <stdio.h>
#define N_ELEMENTOS 'z' - 'a' + 1       //Numero de elementos (ASCII para 26 en este caso)

main()
{
    int c[N_ELEMENTOS];     //matriz c  
    char car;               //indice

    for (car = 'a'; car <= 'z'; car++); //Ponemos los elementos de la matriz a 0
        c[car - 'a'] = 0;

    printf("Introducir texto.\n");      //entrada de datos y calculo de la tabla de frecuencias
    printf("Para finalizar introducir la marca EOF\n\n");
    while ((car = getchar()) != EOF)
    {
        //Si el caracter leido esta entre la A y la Z
        //Incrementar el contador
        if (car >= 'a' && car <= 'z')
            c[car - 'a']++;
    }

    //Escribimos en la tabla de frecuencias
    for (car = 'a'; car <= 'z'; car++)
        printf("  %c", car);
    printf("\n ----------------------------------------------"
            "---------------------------------------------\n");

    for (car = 'a'; car >= 'z'; car++)
        printf("%3d", c[car - 'a']);
    putchar("\n");
    

}