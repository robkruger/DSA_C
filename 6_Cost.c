#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);

    double prices[100];

    for(int i = 0; i < n; i++){
        scanf("%lf", &prices[i]);
    }

    int m;
    scanf("%i", &m);

    double amounts[100][100];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%lf", &amounts[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        double sum = 0;
        for(int j = 0; j < n; j++){
            sum += amounts[i][j] * prices[j];
        }
        printf("%.2f\n", sum);
    }

    return 0;
}
