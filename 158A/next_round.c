#include <stdio.h>

int main(void){
    int n, k;
    scanf("%i %i", &n, &k);
    int s[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &s[i]);
    }
    if(s[k - 1] != 0 && k == n){
        printf("%i\n", k);
    }
    else if(s[k - 1] != 0 && k != n){
        int count = k;
        for(int j = k; j < n; j++){
            if(s[j] == s[k - 1]){
                count++;
            }
        }
        printf("%i\n", count);
    }
    else if(s[k - 1] == 0 && k != n || k == n){
        int b = 0;
        for(int j = 0; j < n; j++){
            if(s[j] != 0){
                b++;
            }
        }
        printf("%i\n", b);
    }
}