#include <stdio.h>

int main(){
    double C;
    scanf("%lf", &C);

    printf("C\tK\tF\n");
    printf("%.2f\t", C);
    printf("%.2f\t", C+273.15);
    printf("%.2f", 1.8*C+32);
}
