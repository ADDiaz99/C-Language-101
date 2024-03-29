/*
contador_vocales.c
Palabras con 4 o mas vocales diferentes
*/
#include <stdio.h>

main()
{
    int np = 0;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char car;

    printf("Introducir cualquier texto: ");
    printf("Para finalizar introducir la marca EOF");
    while ((car = getchar()) != EOF)
    {
        switch (car)
        {
            case 'A': case 'a': case 'á':
                a = 1;
                break;
            case 'E': case 'e': case 'é':
                e = 1;
                break;
            case 'I': case 'i': case 'í':
                i = 1;
                break;
            case 'O': case 'o': case 'ó':
                o = 1;
                break;
            case 'U': case 'u': case 'ú':
                u = 1;
                break;

            default:
                if (car == ' ' || car == '\t' || car == '\n')
                {
                    if ((a + e + i + o + u) >= 4) np++;
                    a = e = i = o = u = 0;
                }
        } // fin del switch
    } // fin del while
    if ((a + e + i + o + u) >= 4) np++;
    printf("Numero de palabras con 4 vocales distintas: %d\n", np);
}