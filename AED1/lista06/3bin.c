#include <stdio.h>
#include <stdlib.h>

void binarySearch_iterative(int *vector, int vectorSize, int key);


int main(){

    int vetor[] = {2, 22, 30, 51, 51, 51, 83, 99}, a, b;
    binarySearch_iterative(vetor, 8, 51);

    return 0;
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