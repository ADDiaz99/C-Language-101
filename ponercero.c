/*Esta funcion devuelve un error de redefinicion del parametro formal "a"
*/

#include <stdio.h>

void poner_a_cero(double);

main()
{
    double a = 10;

    poner_a_cero(a);
    printf("%g\n", a);
}

void poner_a_cero(double a)
{
    double a = 0;
    return;
}

