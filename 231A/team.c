#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    int prob[n];
    for(int i = 0; i < n; i++){
    int a[n], b[n], c[n];
    scanf("%i %i %i", &a[i], &b[i], &c[i]);
    int sum[n];
    sum[i] = a[i] + b[i] + c[i];
        if(sum[i] >= 2){
            prob[i] = 1;
        }
        else{
            prob[i] = 0;
        }
        //for(int j = 0; j < n; j++){
        //    ans += prob[j];       
        //}
    }
    for(int j = 0; j < n; j++){
        
    }
}