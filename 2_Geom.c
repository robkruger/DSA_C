/*
Student: Rob Krüger
Number: 5780608
Assignment: 2_Geom
*/

#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
   double a, r;
   int n, i;
   double result = 0;
   /* Read the inputs from terminal */
   scanf("%lf %i %lf", &a, &n, &r);
   
   for(i = 0; i <= n; i++){
      /* Add the next part of the sequence to the sum */
      result += a * pow(r, i);
   }  
   /* Print the result */
   printf("%.2f\n", result);
   
   return 0;
}
