#include <stdio.h>

int main(void){
    int a;
    scanf("%i", &a);
    float b[a];
    for(int i=0; i<a; i++){
        scanf("%f", &b[i]);
    }

    float k=0;
    for(int j=0; j<a; j++){
        b[j]=b[j]/100;
        k+=b[j];
    }
    //k*=100
    printf("%f", k*100/a);
    //scanf("%f %f %f", &b, &c, &d);
    //printf("%f %f %f %f ", a, b, c, d);
    //float x = b/100 + c/100 + d/100;
    //float ans = x/a;
    //printf("%f", a);
}