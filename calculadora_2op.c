/*
calculadora_2op.c
Este programa permite realizar operaciones aritmeticas basicas (sumar, restar, multiplicar, dividir) con dos operandos.
El menu sera visualizado como una funcion sin argumentos que devolvera como resultado la opcion elegida.
*/
#include <stdio.h>
#include <stdlib.h>

//Declaramos las funciones que van a intervenir en este programa
double sumar(double dato1, double dato2); //el tipo de datos 'double' proporciona las magnitudes más grandes y pequeñas posibles para un número float
double restar(double dato1, double dato2);
double multiplicar(double dato1, double dato2);
double dividir(double dato1, double dato2);
int menu(void);

//Definimos las variables que van a intervenir en el programa
main()
{
double dato1 = 0, dato2 = 0, resultado = 0;
int operacion = 0;

    while (1)
    {
        operacion = menu();
        if (operacion != 5)
        {
            //Leer datos y asignar con '&'
            printf("Dato 1: "); scanf("%lf", &dato1);
            printf("Dato 2: "); scanf("%lf", &dato2); //lf asigna el tipo de dato 'long double'

            fflush(stdin); //Limpiar el buffer del flujo de entrada
            switch (operacion) //Realizar la operacion
            {
                case 1:
                    resultado = sumar(dato1, dato2);
                    break;
                case 2:
                    resultado = restar(dato1, dato2);
                    break;
                case 3:
                    resultado = multiplicar(dato1, dato2);
                    break;
                case 4:
                    resultado = dividir(dato1, dato2);
                    break;
            }

            //Escribimos el resultado
            printf("Resultado = %g\n", resultado);
            printf("Pulse <Entrar> para continuar "); //Hacemos una pausa
            getchar();
        }
        else    
            break;

    }
}

int menu() //Ahora, por fuera del main del programa, creamos lo que el usuario va a ver antes: el menu.
{
    int decision;

    do 
    {
        system("cls"); //Le decimos al sistema que limpie la terminal
        printf("\n*****Bienvenido a la calculadora de dos operandos*****\n ");
        printf("\nSeleccione la operacion que desea realizar:\n");
        printf("\n");
        printf("\t1. Sumar\n");
        printf("\t2. Restar\n");
        printf("\t3. Multiplicar\n");
        printf("\t4. Dividir\n");
        printf("\t5. Salir\n");
        
        scanf("%d", &decision);
    }
    while(decision < 1 || decision > 5);
    return decision;
}
//Ahora definimos que hace cada funcion
double sumar(double a, double b)
{
    double c;
    c = a + b;
    return(c);
}

double restar(double a, double b)
{
    double c;
    c = a - b;
    return(c);
}

double multiplicar(double a, double b)
{
    double c;
    c = a * b;
    return(c);
}
double dividir(double a, double b)
{
    double c;
    c = a / b;
    return(c);
} 
//Fin del programa. Hola Nicky!