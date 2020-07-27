#include <stdio.h>
#include <string.h>

int main(void){
    char s[128];
    scanf("%s\n", s);
    char t[128];
    scanf("%s", t);
    int count = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == t[strlen(s) - i - 1]){
            count++;
        }
    }
    if(count == strlen(s)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}