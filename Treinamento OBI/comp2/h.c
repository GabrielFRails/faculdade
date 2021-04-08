#include <stdio.h>

int main(){

    int galhos, bolinhas;
    scanf("%d %d", &bolinhas, &galhos);
    galhos /= 2;

    if(galhos > bolinhas) printf("Faltam %d bolinha(s)\n", galhos - bolinhas);
    else printf("Amelia tem todas bolinhas!\n");

    return 0;
}