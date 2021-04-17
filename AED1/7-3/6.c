#include <stdio.h>
#include <string.h>

void swap(char *v, int i, int j);
void heapify(char *frase, int size_frase, int i);
void heapSort(char *frase, int size_frase);

int main(){

    char frase[24] = "Ordenando com Heap Sort";
    printf("Antes: %s\n", frase);
    heapSort(frase, 24);

    printf("%s\n", frase);
    return 0;
}

void swap(char *v, int i, int j){

    char temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void heapify(char *frase, int size_frase, int i){

    int max_value = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < size_frase && (int)(frase[leftChild]) > (int)(frase[max_value]))
        max_value = leftChild;

    if (rightChild < size_frase && (int)(frase[rightChild]) > (int)(frase[max_value]))
        max_value = rightChild;

    if (max_value != i){
        swap(frase, i, max_value);
        //printf("Swaping %d and %d in this iteration\n", frase[i], frase[max_value]);
        heapify(frase, size_frase, max_value);
    }
}

void heapSort(char *frase, int size_frase){

    for (int i = size_frase / 2 - 1; i >= 0; i--)
        heapify(frase, size_frase, i);

    for (int i = size_frase - 1; i >= 0; i--){
        swap(frase, 0, i);
        heapify(frase, i, 0);
    }
}