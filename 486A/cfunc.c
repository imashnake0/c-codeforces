#include <stdio.h>

//long long int f(long long int x);
//long long int g(long long int y);

int main(void){
    long long int num;
    scanf("%lld", &num);
    if(num%2==0){
        printf("%lld\n", num/2);
    }
    else{
        printf("%lld\n", (-1*num-1)/2);
        //printf("%lld\n", num);
    }
}

/*
long long int f(long long int x){
    long long int k = 0;
    for(long long int i=1; i<=x; i++){
        k=k+g(i);
    }
    return k;
}

long long int g(long long int y){
    if(y%2==0){
        return y;
    }
    else{
        return -1*y;
    }
}
*/