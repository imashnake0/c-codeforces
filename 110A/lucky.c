#include <stdio.h>
#include <string.h>

int main(void){
    char n[1][10000];
    scanf("%s", n[0]);
    int count = 0;
    int len = strlen(n[0]);
    for(int i = 0; i < len; i++){
        if(n[0][i] == '4'){
            count++;
        }
        if(n[0][i] == '7'){
            count++;
        }
    }
    char num[20];
    sprintf(num, "%i", count);
    //printf("%s\n", num);
    int b = 0;
    for(int j = 0; j < strlen(num); j++){
        if(num[j] != 0){
            if(num[j] == '4' || num[j] == '7'){
                b++;
            }
            else{
                b--;
            }
        }
    }
    if(b <= 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}