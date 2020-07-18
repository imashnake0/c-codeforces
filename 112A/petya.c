#include <stdio.h>
#include <ctype.h>

ans(char a, char b);

int main(void){
    char words[2][100];
    char lower_words[2][100];
    scanf("%s\n", words[0]);
    scanf("%s", words[1]);
    for(int i = 0; i < 100; i++){
        lower_words[0][i] = tolower(words[0][i]);
        lower_words[1][i] = tolower(words[1][i]);
    }
    //printf("%s, %s\n", lower_words[0], lower_words[1]);

}

ans(char a, char b){
    if(a < b){
        
    }
    else if(a > b){

    }
}