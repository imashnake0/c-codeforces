#include <stdio.h>
#include <string.h>

int main(void){
    int n, t;
    scanf("%i %i\n", &n, &t);
    char queue[n];
    char queue_new[n];
    scanf("%s", queue);
    //int count = 0;
    for(int l = 0; l < n; l++){
        queue_new[l] = queue[l];
    }
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            if(queue[j] == 'B' && queue[j + 1] == 'G'){
                queue_new[j] = 'G';
                queue_new[j + 1] = 'B';
            }
        }
        for(int m = 0; m < n; m++){
            queue[m] = queue_new[m];
        }
    }
    for(int p = 0; p < n; p++){
        printf("%c", queue_new[p]);
    }
    printf("\n");
}