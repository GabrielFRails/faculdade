#include <stdio.h>
/*
    torre1 - origem
    torre2 - auxiliar
    torre3 - destino
*/
void torre_hanoi(int discos, char origem, char destino, char auxiliar);

int main(){

    int n_discos = 0;
    char torre_origem, torre_destino, torre_aux; 
    scanf("%d %c %c %c", &n_discos, &torre_origem, &torre_aux, &torre_destino);

    torre_hanoi(n_discos, torre_origem, torre_destino, torre_aux);

    return 0;
}

void torre_hanoi(int discos, char origem, char destino, char auxiliar){

    if(discos == 1){
        printf("Mova o disco %d da torre %c para a torre %c\n", discos, origem, destino);
        return;
    }

    torre_hanoi(discos-1, origem, auxiliar, destino);
    printf("Mova o disco %d da torre %c para a torre %c\n", discos, origem, destino);
    torre_hanoi(discos-1, auxiliar, destino, origem);
}