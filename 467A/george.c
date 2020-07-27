#include <stdio.h>

int main(void){
    int n;
    scanf("%i\n", &n);
    int dorm[n][2];
    for(int i = 0; i < n; i++){
        scanf("%i %i", &dorm[i][0], &dorm[i][1]);
    }
    int count = 0;
    for(int j = 0; j < n; j++){
        if(dorm[j][1] - dorm[j][0] >= 2){
            count++;
        }
    }
    printf("%i\n", count);
}