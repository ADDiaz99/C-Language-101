//arithmetic basics with C language

#include <stdio.h>

main()
{
    int dato1, dato2, dato3, resultado;
    dato1 = 20;
    dato2 = 10;
    dato3 = 5;

    //Suma
    resultado = dato1 + dato2 + dato3;
    printf("%d + %d + %d = %d\n", dato1, dato2, dato3, resultado);

    //Resta
    resultado = dato1 - dato2 - dato3;
    printf("%d - %d - %d = %d\n", dato1, dato2, dato3, resultado);

    //Multiplicacion
    resultado = dato1 * dato2 * dato3;
    printf("%d * %d * %d= %d\n", dato1, dato2, dato3, resultado);

    //Division
    resultado = dato1 / dato2;
    printf("%d / %d= %d\n", dato1, dato2, resultado);
}