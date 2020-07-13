#include <stdio.h>

int main(void){
    int n, k;
    scanf("%i %i", &n, &k);
    int s[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &s[i]);
    }
    //int sum = 0;
    //for(int l = 0; l < n; l++){
    //    sum += s[l];
    //}
    int count = 0;
    if(1 == 1){
        for(int j = 0; j < n; j++){
            if(s[j] >= s[k] && s[j] > 0){
                count++;
            }
        }
        printf("%i\n", count);
    }
    //else if(sum == 0){
    //    printf("%i\n", 0);
    //}
}