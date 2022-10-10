#include <stdio.h>
#include <math.h>

int main (void){
    int number;
    scanf("%i", &number);

    if(number < 2){
        printf("%i is not a prime number", number);
        return 0;
    } else {
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
            printf("%i is not a prime number", number);
            return 0;
        }
        printf("%i is a prime number", number);
    }
    
    return 0;
}