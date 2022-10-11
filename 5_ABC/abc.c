#include <stdio.h>
#include <math.h>

extern int a, b, c;

double x1real, x2real, ximag;

int discriminant(void){
    return (b * b) - 4 * a * c;
}

void abc(void){
    int d = discriminant();

    if(d > 0){
        x1real = (-b + sqrt(d)) / (2 * a);
        x2real = (-b - sqrt(d)) / (2 * a);
    }
    else if(d == 0){
        x1real = (-b) / (2 * a);
    }
    else if(d < 0){
        ximag = sqrt(-d) / (2 * a);
        x1real = (double)(-b) / (2 * a);
        x2real = (double)(-b) / (2 * a);
    }
}