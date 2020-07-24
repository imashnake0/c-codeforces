#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    int stop[2][n];
    for(int i = 0; i < n - 1; i++){
        scanf("%i %i\n", &stop[0][i], &stop[1][i]);
    }
    scanf("%i %i", &stop[0][n - 1], &stop[1][n - 1]);
    int count = 0;
    int count_stop[n];
    for(int k = 0; k < n; k++){
        count -= stop[0][k];
        count += stop[1][k];
        count_stop[k] = count;
    }
    int temp;
    while(1){
        int s = 0;
        for(int m = 0; m < n - 1; m++){
            if(count_stop[m] > count_stop[m + 1]){
                temp = count_stop[m];
                count_stop[m] = count_stop[m + 1];
                count_stop[m + 1] = temp;
                s = 1;
            }
        }
        if(s == 0){
            break;
        }
    }
    printf("%i\n", count_stop[n - 1]);
}