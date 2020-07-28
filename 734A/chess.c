#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    scanf("%i", &n);
    char out[1][n];
    scanf("%s", out[0]);
    int countA = 0;
    int countD = 0;
    for(int j = 0; j < n; j++){
        if(out[0][j] == 'A'){
            countA++;
        }
        else{
            countD++;
        }
    }
    if(countA > countD){
        printf("Anton\n");
    }
    else if(countA < countD){
        printf("Danik\n");
    }
    else{
        printf("Friendship\n");
    }
}