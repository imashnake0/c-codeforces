#include <stdio.h>
#include <string.h>

int main(void){ 
    char add[100];
    scanf("%s", add);
    int len = strlen(add);
    int count;
    int temp;
    while(1){
        count = 0;
        for(int j = 0; j < len - 2; j += 2){
            if(add[j] > add[j + 2]){
                temp = add[j];
                add[j] = add[j + 2];
                add[j + 2] = temp;
                count = 1;
            }
        }
        if(count == 0){
            break;
        }
    }
    for(int k = 0; k < len; k++){
        if(add[k] != 0){
            printf("%c", add[k]);
        }
    }
    printf("\n");
}