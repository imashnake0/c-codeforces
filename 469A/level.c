#include <stdio.h>

int main(void){
    int a;
    scanf("%i", &a);
    int A;
    scanf("%i", &A);
    int A_arr[A];
    for(int i=0; i<A; i++){
        scanf("%i", &A_arr[i]);
    }
    int B;
    scanf("%i", &B);
    int B_arr[B];
    for(int j=0; j<B; j++){
        scanf("%i", &B_arr[j]);
    }

    int AB_arr[A+B];
    for(int k=0; k<A; k++){
        AB_arr[k]=A_arr[k];
    }
    for(int l=0; l<B; l++){
        AB_arr[A+l]=B_arr[l];
    }

    if(A==0&&B==0){
        printf("Oh, my keyboard!");
    }
    else{
        int stat=0;
        for(int m=1; m<=a; m++){
            if(stat==0){
                for(int n=0; n<A+B; n++){
                    if(m==AB_arr[n]){
                        stat=0;
                        break;
                    }
                    else{
                        stat=1;
                    }
                }
            }
        }

        if(stat==1){
            printf("Oh, my keyboard!");
        }
        /*
        else if(A_bool==1 && B_bool==1){
            printf("Oh, my keyboard!");
        }
        */
        else{
            printf("I become the guy.");
        }
    }
}