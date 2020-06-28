#include <stdio.h>

int main(void){
    int w;
    scanf("%i", &w);
    if(w % 2 == 0 && 3 <= w && w <= 100 && w){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}