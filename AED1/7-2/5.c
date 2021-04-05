#include <stdio.h>

void swap(int *v, int i, int j);
void shellSort(int *vetor, int tam);

int main(){

    int trocas = 0, vetor[100];
    int i=0;

    for(i=0; i<100; i++){

        if(i<50){
            if(i%2 == 0){
                vetor[i] = (i+1) * 7 - 5;
            } else vetor[i] = (i+1) * 4;
        } else{
            if(i%2 == 0){
                vetor[i] = (i) * 2 - 49;
            } else vetor[i] = (i) * 3 - 10;
        }
    }
   
    shellSort(vetor, 100);

    printf("Imprimindo o vetor apos a ordenacao: ");
    for(i=0; i<100; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void shellSort(int *vetor, int tam){
    int i, j, k, valor, trocas;
    i = j = valor = trocas = 0;
    k = 1;

    while(k < tam)  k = 3 * k+1;
    while(k > 0){
        for(i=k; i < tam; i++){
            valor = vetor[i];
            j = i;
            while(j > k - 1 && valor >= vetor[j-k]){
                vetor[j] = vetor[j-k];
                j -= k;
                trocas++;
            }
            vetor[j] = valor;
        }
        k /= 3;
    }

    printf("Movimentacoes realizadas no shell sort: %d\n", trocas);
}