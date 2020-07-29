#include <stdio.h>

int main(void){
    int n, h;
    scanf("%i %i", &n, &h);
    int fri[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &fri[i]);
    }
    int count = 0;
    for(int j = 0; j < n; j++){
        if(fri[j] > h){
            count++;
        }
    }
    printf("%i\n", count + n);
}