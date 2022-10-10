#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
   double a, r;
   int n;
   scanf("%lf %i %lf", &a, &n, &r);
   double result = 0;
   for(int i = 0; i <= n; i++){
      result += a * pow(r, i);
   }
   printf("%.2f", result);
   return 0;
}