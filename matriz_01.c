/*
matriz_01.c
Trabajando con el concepto de matrices unidimensionales
*/

#include <stdio.h>
#define N_ELEMENTOS 10              //primero definimos la constante y fijamos el numero de elementos

main()
{
    int m[N_ELEMENTOS];                 //creamos la matriz m
    int i = 0;                          //subindice i para acceder a esos elementos

    printf("Introducir los valores de la matriz.\n");

    for (i = 0; i < N_ELEMENTOS; i++)   //Entrada de datos
    {
        printf("m[%d] = ", i);
        scanf("%d", &m[i]);
    }

    for (i = 0; i < N_ELEMENTOS; i++)   //Salida de datos
        printf("%d  ", m[i]);
    printf("\n\n*********Fin del Proceso*********\n");
    
}


