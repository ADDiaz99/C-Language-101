/*
listapromedio.c
Tomar todos los numeros de un array, sumarlos, y dar un promedio
*/

#include <stdio.h>

int main()
{
    int array[] = {2, 4, 6, 8, 10};     //Iniciamos el array
    int size = 5;                       //size, para luego dividir y sacar promedio

    int sum = 0;                        //iniciamos Sum a 0
    int prom = 0;

    for (int i = 0; i < size; i++)      //Por cada numero mientras que la pos del array sea menor que size...
    {
        sum = sum + array[i];           // sumatoria = suma + array[posicion] (aumenta porque es el i)
        
    } 

    prom = sum / size;                  //sacamos promedio

    printf("La suma total es: %d\n", sum); 
    printf("Y el promedio: %d\n", prom);


}