#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char word[100];
    scanf("%s", word);
    int count = 0;
    for(int i = 0; i < strlen(word); i++){
        if(word[i] <= 90){
            count++;
        }
        else{
            count--;
        }
    }
    if(count > 0){
        for(int j = 0; j < strlen(word); j++){
            word[j] = toupper(word[j]);
        }
        printf("%s\n", word);
    }
    else{
        for(int k = 0; k < strlen(word); k++){
            word[k] = tolower(word[k]);
        }
        printf("%s\n", word);
    }
}