#include<stdio.h>

int main(){

    // Normal Array inside Stack
    int B[5];

    // Array inside Heap
    int *A;

    // Initialize Memory
    A = new int[5];

    // Deallocate Memory
    delete []A;
}