#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    int bin[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &bin[i]);
    }
    int count = 0;
    for(int j = 0; j < n; j++){
        if(bin[j]){
            count++;
        }
    }
    if(count > 0){
        printf("HARD\n");
    }
    else{
        printf("EASY\n");
    }
}