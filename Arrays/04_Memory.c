#include<stdio.h>
#include<stdlib.h>

int main(){

    // In C Language, size is mentioned at Compile Time, unlike C++.
    // Size of Array in Stack cannot be modified once created.
    int A[5];

    // Storing Array in Heap
    // Size of Array in Heap can be altered but with some alternative ways.
    int noOfBlocks = 3;
    int *P;

    // Allocating Memory
    P = (int *)malloc(noOfBlocks*sizeof(int));

    P[0] = 10;
    P[1] = 20;
    P[2] = 30;

    for(int i = 0; i < 3; i++){
        printf("%d \n %u \n", P[i], &P[i]);
    }
    // Deallocating Memory
    free(P);
}