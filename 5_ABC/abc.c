/*
Student: Rob Krüger
Number: 5780608
Assignment: 5_ABC
*/

#include <stdio.h>
#include <math.h>

/* Get the inputs from interface.c by using the keyword 'extern' */
extern int a, b, c;

double x1real, x2real, ximag;

int discriminant(void){
    /* Calculate the discriminant with the inputs from interface.c */
    return (b * b) - 4 * a * c;
}

void abc(void){
    /* Get the discriminant */
    int d = discriminant();
    /* Initialize the variables again */
    x1real = 0;
    x2real = 0;
    ximag = 0;

    if(d > 0){
        /* The result should consist of 2 real answers */
        x1real = (-b + sqrt(d)) / (2 * a);
        x2real = (-b - sqrt(d)) / (2 * a);
    }
    else if(d == 0){
        /* There is only 1 answer */
        x1real = (-b) / (2 * a);
    }
    else if(d < 0){
        /* The result should be an imaginary answer */
        ximag = sqrt(-d) / (2 * a);
        x1real = (double)(-b) / (2 * a);
        x2real = (double)(-b) / (2 * a);
    }
}