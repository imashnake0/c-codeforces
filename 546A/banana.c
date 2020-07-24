#include <stdio.h>

int main(void){
    int k, n, w;
    scanf("%i %i %i", &k, &n, &w);
    int req = 0;
    for(int i = 1; i < w + 1; i++){
        req = req + i*k;
    }
    if(req - n > 0){
        printf("%i\n", req - n);
    }
    else{
        printf("%i\n", 0);
    }
}