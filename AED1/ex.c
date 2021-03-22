#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[10001];
    int T, i, j;
    scanf("%d", &T);
    
    for(i=0; i<T; i++){
        scanf("%*c%[^\n]", str);
        for(j=0; str[j] != '\0'; j++){
            if(j == 0 || j%2 == 0) printf("%c", str[j]);
        }
        printf(" ");
        for(j=0; str[j] != '\0'; j++){
            if(j%2 != 0) printf("%c", str[j]);
        }
        printf("\n");
    }
     
    return 0;
}
