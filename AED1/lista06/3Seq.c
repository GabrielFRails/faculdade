#include <stdio.h>
#include <stdlib.h>

void binarySearch_iterative(int *vector, int vectorSize, int key);
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
        }
    }
    
    
    for(i=0; i<tam-1; i++){
        printf("%d, ", repetidos[i]);
    }
    printf("\n");
}

void binarySearch_iterative(int *vector, int vectorSize, int key){

    int begin = 0, end = vectorSize - 1, i=0;

    while(begin <= end){
        i = (begin+end)/2;
        //printf("%d + %d /2 = %d\n", begin, end, i);
        if(vector[i] == key){
            //return i;
        }
        if(vector[i] < key){
            begin = i + 1;
        } else{
            end = i;
        }
    }
}