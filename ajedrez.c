// Tablero de ajedrez con posiciones de un alfil

#include <stdio.h>

main()
{
    int falfil, calfil; //Posicion inicial del alfil
    int fila, columna;  //Posicion actual del alfil

    printf("Posicion del alfil (fila, columna): ");
    scanf("%d %d", &falfil, &calfil);
    printf("\n"); //Dejar linea en blanco

    //Pintar el tablero de ajedrez
    for (fila = 1; fila <= 8; fila++)
    {
        for (columna = 1; columna <= 8; columna++)
        {
            if ((fila + columna == falfil + calfil) ||
                (fila - columna == falfil - calfil))
                printf("* ");
            
            else if ((fila + columna) % 2 == 0)
                printf("B ");
            
            else
                printf("N ");
        }
        printf("\n"); // Cambiar de fila
    }
}