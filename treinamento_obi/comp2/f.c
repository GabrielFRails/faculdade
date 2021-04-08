#include <stdio.h>

int main(){

    int D = 0, E = 0, new_data = 0;
    scanf("%d %d", &E, &D);

    if(D < E) printf("Eu odeio a professora!\n");

    else if(E <= D-3) printf("Muito bem! Apresenta antes do Natal!\n");
    else {
        printf("Parece o trabalho do meu filho!\n");
        new_data = D + 2;
        if(new_data <= 24) printf("TCC Apresentado!\n");
        else printf("Fail! Entao eh nataaaaal!\n");
        
    }

    return 0;
}