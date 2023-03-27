/*
matriz_02.c
Nota promedio de todos los alumnos de un salon de clase utilizando datos en una matriz
*/

#include <stdio.h>
#define N_ALUMNOS 100

main()
{
    float notas[N_ALUMNOS];         //matriz de notas
    int i = 0;                      //indice
    int numero_alumnos = 0;         //numero real de alumnos
    float suma = 0;                 //suma total de todas las notas medias

    do
    {
        printf("Numero de alumnos: ");
        scanf("%d", &numero_alumnos);
    } 
    while (numero_alumnos < 1 || numero_alumnos > N_ALUMNOS); //Mientras que esto suceda, no se sale de este bucle
    

    for (i = 0; i < numero_alumnos; i++)    //Almacenamos en la matriz las notas introducidas
    {
        printf("Alumno numero %3d, nota media: ", i+1);
        scanf("%f", &notas[i]);         //Agregamos los datos a cada iteracion
    }

    for (i = 0; i < numero_alumnos; i++)
        suma += notas[i];
    printf("\n\nNota media del Curso: %5.2f\n", suma / numero_alumnos);






}
