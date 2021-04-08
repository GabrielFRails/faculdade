#include <stdio.h>

int main(){

    int a, b, c, d ,e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int gramas_total = 0;
    gramas_total = 225 + (a*300) + (b*1500) + (c*600) + (d*1000) + (e*150);
    printf("%d\n", gramas_total);

    return 0;
}