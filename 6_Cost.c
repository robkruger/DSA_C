/*
Student: Rob Krüger
Number: 5780608
Assignment: 6_Cost
*/

#include <stdio.h>

int main(void){
    int n, m, i, j;
    double sum = 0;
    double prices[100];
    double amounts[100][100];
    scanf("%i", &n);

    for(i = 0; i < n; i++){
        scanf("%lf", &prices[i]);
    }

    scanf("%i", &m);

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%lf", &amounts[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        sum = 0;
        for(j = 0; j < n; j++){
            sum += amounts[i][j] * prices[j];
        }
        printf("%.2f\n", sum);
    }

    return 0;
}
