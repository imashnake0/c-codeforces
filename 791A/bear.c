#include <stdio.h>

int main(void){
    int a, b;
    scanf("%i %i", &a, &b);
    int years = 0;
    for(int i = 0; i < 10; i++){
        if(a == b || a < b){
            a *= 3;
            b *= 2;
            years++;
        }
        else{
            printf("%i\n", years);
            break;
        }
    }
}