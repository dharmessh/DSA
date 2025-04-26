#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Arrays are created within Stack
    // Declaration
    // Uninitializes array will contain all the garbage values
    int A[5];

    // Declaration Plus Initialization
    int B[5] = {1,2,3,4,5};

    // Undeclared members will be initialized to Zero
    int C[10] = {7,8,9};

    // All the members will be initialized to Zero
    int D[5] = {0};

    // Array will take it size based on the number of members.
    int E[] = {1,2,3,4,5,6,7,8,9};

    return 0;
}