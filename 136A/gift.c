#include <stdio.h>

int main(void){
    int n;
    scanf("%i\n", &n);
    int friend[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &friend[i]);
    }
    int temp[n];
    for(int j = 0; j < n; j++){
        temp[friend[j] - 1] = j + 1;
    }
    for(int k = 0; k < n; k++){
        printf("%i ", temp[k]);
    }
    printf("\n");
}