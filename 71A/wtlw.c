#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    char word[n][128];
    if(0 <= n && n <= 128){
        for(int i = 0; i < n; i++){
            scanf("%s", word[i]);
        }
    }
    for(int k = 0; k < n; k++){
        int j;
        for(j = 0; word[k][j] != 0; ){
            if(word[k][j] != 0){
                j++;
            }
        }
        if(j > 10){
            printf("%c%i%c\n", word[k][0], j - 2, word[k][j - 1]);
        }
        else{
            printf("%s\n", word[k]);
        }
    }
}