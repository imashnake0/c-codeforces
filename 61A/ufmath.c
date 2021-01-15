#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int abs(int x);

int main(void){
    char a[102];
    scanf("%s\n", a);
    char b[102];
    scanf("%s", b);
    char* c = (char*)malloc((strlen(a)+1)*sizeof(char));
    for(int i=0; i<strlen(a); i++){
        if(a[i] != b[i]){
            c[i]='1';
        }
        else{
            c[i]='0';
        }
    }
    c[strlen(a)]='\0';
    printf("%s\n", c);
    //printf("%lu", strlen(c));
}

int abs(int x){
    if(x<0){
        return -1*x;
    }
    else{
        return x;
    }
}