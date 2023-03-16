/*
triangle.c */

#include <stdio.h>

main()
{
    double base = 11.5, altura = 3.0, area = 0.0;

    area = base * altura / 2;
    printf("Area = %g\n", area);
}

//This code generates the area of a triangle, note the use of %g to hide all the zeroes after 17.25
