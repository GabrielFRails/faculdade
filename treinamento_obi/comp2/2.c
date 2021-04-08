#include <stdio.h>

int main(){

    int A, B, C, H, L; //altura - largura - comprimento
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d", &H, &L);
    int pontos = 0;

    if(B <= L && A <= H) pontos++;
    if(A <= L && B <= H) pontos++;
    if(C <= H && A <= L) pontos++;

    if(pontos > 0) printf("S\n");
    else printf("N\n");

    return 0;
}