#include <stdio.h>
#include <ctype.h>
#include <string.h>

void ans(char a, char b);

int count = 0;

int main(void){
    char words[2][100];
    char lower_words[2][100];
    scanf("%s\n", words[0]);
    scanf("%s", words[1]);
    for(int i = 0; i < 100; i++){
        lower_words[0][i] = tolower(words[0][i]);
        lower_words[1][i] = tolower(words[1][i]);
    }    
    if(strcmp(lower_words[0], lower_words[1]) == 0){
        printf("%i\n", 0);
    }
    int len = strlen(words[0]);
    int count = 0;
    for(int j = 0; j < len; j++){
        if(lower_words[0][j] < lower_words[1][j]){
            count--;
        }
        else if(lower_words[0][j] > lower_words[1][j]){
            count++;
        }
        else{
            count += 0;
        }
        if(count != 0){
            printf("%i\n", count);
            break;
        }
    }
}