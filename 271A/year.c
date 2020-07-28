#include <stdio.h>

int main(void){
    int y;
    scanf("%i", &y);
    int next = y + 1;
    for(int i = 0; i < 8000; i++){
        int count = 0;
        char year[4];
        sprintf(year, "%i", next);
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                if(year[j] == year[k] && j != k){
                    count = 1;
                }
            }
        }
        if(count != 0){
            next++;
        }
        else{
            printf("%i\n", next);
            break;
        }
    }
    //printf("%i\n", count);
}