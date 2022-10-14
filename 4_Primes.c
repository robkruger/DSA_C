/*
Student: Rob Krüger
Number: 5780608
Assignment: 4_Primes
*/

#include <stdio.h>
#include <math.h>

int is_prime (int number){
    int i;
    int result = 1;
    if(number < 2){
        return 0;
    }
    
    for(i = 2; (i * i) <= number; i++){
        if(number % i == 0){
            result = 0;
            break;
        }
    }
    if(!result){
        return 0;
    }
    
    return 1;
}

int main (void){
    int lower_limit, upper_limit, i;
    scanf("%i", &lower_limit);
    scanf("%i", &upper_limit);
    
    for(i = lower_limit; i <= upper_limit; i++){
        if(is_prime(i)){
            printf("%i\n", i);
        }
    }
    
    return 0;
}
