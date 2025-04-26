#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Way 01
    // 2D Array - Stored in Stack
    // Declaration plus Initialization
    int A[3][5] = {{1,2,3,4,5},{10,11,12,13,14},{20,21,22,23,24}};

    // Accessing
    printf("%d", A[1][3]);
    printf("\n");

    // Way 02
    // Array of Pointers within Stack
    int *P[3];

    // Within Heap
    P[0] = (int *)malloc(4 * sizeof(int));
    P[1] = (int *)malloc(4 * sizeof(int));
    P[2] = (int *)malloc(4 * sizeof(int));

    // Way 03
    // Everything within Heap Memory
    int **C;
    C = (int **)malloc(3 * sizeof(int *));
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    // Printing Elements
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}