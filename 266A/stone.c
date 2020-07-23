#include <stdio.h>
#include <string.h>

int main(void){
    int len;
    scanf("%i\n", &len);
    char stone[len];
    scanf("%s", stone);
    int count = 0;
/*
//YESTERDAY'S CODE
    for(int i = 0; i < len - 2; i++){
        if((stone[i] == stone[i + 1]) || (stone[i + 1] == stone[i + 2])){
            count++; 
        }
    }
    if(count == len - 2 && stone[0] == stone[len - 1]){
        printf("%i\n", len - 1);
    }
    else{
        printf("%i\n", count);
    }
*/
//TODAY'S CODE
    for(int k = 0; k < len; k++){
        for(int n = 0; n < len; n++){
            if(stone[n] == stone[n + 1]){
                for(int i = n; i < len; i++){
                    stone[i] = stone[i + 1];
                }
            }
        }
    }
//printf("\n");
printf("%lu\n", len - strlen(stone));
//printf("%s\n", stone);
}