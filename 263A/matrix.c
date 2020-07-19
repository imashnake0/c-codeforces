#include <stdio.h>

int main(void){
    int a[5][5]; //a[i][j]
    scanf("%i %i %i %i %i\n", &a[0][0], &a[0][1], &a[0][2], &a[0][3], &a[0][4]);
    scanf("%i %i %i %i %i\n", &a[1][0], &a[1][1], &a[1][2], &a[1][3], &a[1][4]);
    scanf("%i %i %i %i %i\n", &a[2][0], &a[2][1], &a[2][2], &a[2][3], &a[2][4]);
    scanf("%i %i %i %i %i\n", &a[3][0], &a[3][1], &a[3][2], &a[3][3], &a[3][4]);
    scanf("%i %i %i %i %i", &a[4][0], &a[4][1], &a[4][2], &a[4][3], &a[4][4]);
    int i;
    int j;
    int ii;
    int jj;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(a[i][j] == 0){
                ;
            }
            else{
                ii = i + 1;
                jj = j + 1;
                break;
            }
        }
    }
    int iii = ii - 3;
    int jjj = jj - 3;
    if(iii < 0){
        iii *= -1;
    }
    if(jjj < 0){
        jjj *= -1;
    }
    printf("%i\n", iii + jjj);
}