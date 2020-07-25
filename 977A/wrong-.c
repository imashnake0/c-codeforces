#include <stdio.h>

int main(void){
    int n, k;
    scanf("%i %i", &n, &k);
    for(int i = 0; i < k; i++){
        if(n % 10 == 0){
            n = n/10;
        }
        else{
            n--;
        }
    }
    printf("%i\n", n);
}