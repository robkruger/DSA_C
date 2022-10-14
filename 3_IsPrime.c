/*
Student: Rob Krüger
Number: 5780608
Assignment: 3_IsPrime
*/

#include <stdio.h>
#include <math.h>

int main (void){
    int number, i;
    int result = 1;
    scanf("%i", &number);

    if(number < 2){
        printf("%i is not a prime number\n", number);
        return 0;
    }
    
    for(i = 2; (i * i) <= number; i++){
        if(number % i == 0){
            result = 0;
            break;
        }
    }
    if(!result){
        printf("%i is not a prime number\n", number);
        return 0;
    }
    printf("%i is a prime number\n", number);
    
    return 0;
}
