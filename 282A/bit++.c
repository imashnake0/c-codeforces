#include <stdio.h>
#include <string.h>

int main(void){
    char plus = '+';
    int n;
    scanf("%i", &n);
    char sign[n][4];
    if(0 <= n && n <= 150){
        for(int i = 0; i < n; i++){
            scanf("%s", sign[i]);
        }
    }
    int count = 0;
    for (int j = 0; j < n; j++){
        if(sign[j][1] == plus){
            count++;
        }
        else{
            count--;
        }
    }
    printf("%i\n", count);
}