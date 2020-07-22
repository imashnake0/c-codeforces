#include <stdio.h>
#include <string.h>

int main(void){
    int len;
    char stone[len];
    scanf("%i\n", &len);
    scanf("%s", stone);
    int count = 0;
    for(int i = 0; i < len - 2; i++){
        if(stone[i] == stone[i + 1] || stone[i + 1] == stone[i + 2]){
            count++; 
        }
    }
    if(count == len - 2 && stone[0] == stone[len - 1]){
        printf("%i\n", len - 1);
    }
    else{
        printf("%i\n", count);
    }
}