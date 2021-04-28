#include <stdio.h>
#include <stdlib.h>

void binarySearch_iterative(int *vector, int vectorSize, int key);

int main(){

    int vetor[] = {2, 22, 30, 35, 40, 51, 51, 51};
    binarySearch_iterative(vetor, 8, 51);

    return 0;
}

void binarySearch_iterative(int *vector, int vectorSize, int key){

    int begin = 0, end = vectorSize - 1, i=0, ind_direita, ind_esquerda, tam = 2;
    int *repetidos = (int*) malloc(sizeof(int)), *n_repetidos;

    while(begin <= end){
        i = begin + (end - begin) / 2;
        if(vector[i] == key){
            repetidos[0] = i;
            n_repetidos = (int *) realloc(repetidos, sizeof(int)*tam);
            repetidos = n_repetidos;

            ind_esquerda = i-1;
            ind_direita = i+1;

            while(ind_esquerda >= 0){
                if(vector[ind_esquerda] != key) break;
                else{
                    repetidos[tam-1] = ind_esquerda;
                    tam++;
                    n_repetidos = (int *) realloc(repetidos, sizeof(int)*tam);
                    repetidos = n_repetidos;
                }
                ind_esquerda--;
            }

            while(ind_direita < vectorSize){
                if(vector[ind_direita] != key) break;
                else{
                    repetidos[tam-1] = ind_direita;
                    tam++;
                    n_repetidos = (int *) realloc(repetidos, sizeof(int)*tam);
                    repetidos = n_repetidos;
                }
                ind_direita++;
            }
            break;
        }
        if(vector[i] < key){
            begin = i + 1;
        } else{
            end = i;
        }
    }

    tam -= 1;
    printf("tam %d\n", tam);
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