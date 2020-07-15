#include <stdio.h>

int main(void){
    int M, N;
    scanf("%i %i", &M, &N);
    if(M > 0 && N > 0){
        printf("%i\n", M*N/2);
    }
}