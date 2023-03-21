//Uso del continue, imprimir multiplos de 5 del 1 al 100

#include <stdio.h>

main()
{
    int n;
    for (n = 0; n <= 100; n++)
    {
        //Si N no es multiplo de 5, continua a lo siguiente
        if (n % 5 != 0) continue;
        //Imprime el siguiente multiplo
        printf("%d  ", n);
    }
}