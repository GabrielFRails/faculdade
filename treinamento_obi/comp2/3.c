#include <stdio.h>

int main(){

    int C, N;
    scanf("%d%d", &C, &N);
    int ponto_termino = 0, aux = 0;
    aux = C/N;
    ponto_termino = C - (N*aux); 

    printf("%d\n", ponto_termino);

    return 0;
}