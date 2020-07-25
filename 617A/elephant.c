#include <stdio.h>

int main(void){
    int x;
    scanf("%i", &x);
    int count = 0;
    int test = 0;
    for(int i = 0; i < 200000; i++){
        if(count + 5 <= x){
            count += 5;
            test++;
        }
    }
    if(x % 5 == 0){
        printf("%i\n", test);
    }
    else{
        printf("%i\n", test + 1);
    }
}