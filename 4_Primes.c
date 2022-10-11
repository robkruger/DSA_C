#include <stdio.h>
#include <math.h>

int is_prime (int number){
    if(number < 2){
        return 0;
    }
    
    int i = 2;
    int result = 1;
    for(int i = 2; i <= sqrt(number); i++){
        if((i * i) <= number){
            if(number % i == 0){
                result = 0;
                break;
            }
        }
    }
    if(!result){
        return 0;
    }
    
    return 1;
}

int main (void){
    int lower_limit, upper_limit;
    scanf("%i", &lower_limit);
    scanf("%i", &upper_limit);
    
    for(int i = lower_limit; i <= upper_limit; i++){
        if(is_prime(i)){
            printf("%i\n", i);
        }
    }
    
    return 0;
}
