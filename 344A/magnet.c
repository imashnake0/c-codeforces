#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    int num[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &num[i]);
    }
    int count = 0;
    for(int j = 0; j < n - 1; j++){
        if(num[j] != num[j + 1]){
            count++;
        }
    }
    printf("%i\n", count + 1);
}