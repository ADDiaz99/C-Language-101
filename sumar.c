/*Declaracion de sumar
*/
#include <stdio.h>

double sumar( double a, double b);

main()
{
    double a = 10, b = 20, c = 0;
    
    c = sumar(a, b);
    printf("suma = %g\n", c);
}

double sumar(double x, double y)
{
    return x + y;
}
