#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    int Xcont = X/a, Ycont = Y/b, Zcont = Z/c, quantidade_cont;
    
    quantidade_cont = Xcont * Ycont * Zcont;
    printf("%d\n", quantidade_cont);

    return 0;
}