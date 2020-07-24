#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];
    scanf("%s", name);
    float len = strlen(name);
    int count = 0;
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int k = 0; k < 26; k++){
        for(int i = 0; i < len; i++){
            if(alphabet[k] == name[i]){
                count++;
                alphabet[k] = 0;
            }
        }
    }
    if(count % 2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
}