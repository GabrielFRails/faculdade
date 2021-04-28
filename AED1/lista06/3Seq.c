#include <stdio.h>
#include <stdlib.h>

void sequencialSearch(int *vector, int vectorSize, int key);

int main(){

    int vetor[] = {2, 22, 30, 51, 51, 51, 83, 99}, a, b;
    //binarySearch_iterative(vetor, 8, valor);
    sequencialSearch(vetor, 8, 51);

    return 0;
}

void sequencialSearch(int *vector, int vectorSize, int key){

    int i = 0, *repetidos = (int*) malloc(sizeof(int)), tam = 1, *n_repetidos;
    while(i<vectorSize){
        i++;
        if(vector[i] == key){
            repetidos[tam-1] = i;
            tam++;
            n_repetidos = (int *) realloc(repetidos, sizeof(int)*tam);
            repetidos = n_repetidos;
        }
    }
    
    tam -= 1;
    for(i=0; i<tam; i++){
        if(i == tam -1){
            printf("%d\n", repetidos[i]);
        }
        else{
            printf("%d, ", repetidos[i]);
        }
    }
    free(repetidos);
}