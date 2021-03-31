#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i, j, k = 0, n = 0;
    int op = 0;
    int a;

    for(a=0; a<=50; a++){
        n = a;
        for(i=n/2; i<=n; i++){
            for(j=2; j<=n; j=j*2){
                k += n/2;
                op++;
            }
        }
        printf("n = %d => k = %d e op = %d\n", a, k, op);
    }
    
    return 0;
}
