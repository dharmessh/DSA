#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];
    int i;

    // Printing Address of the Array
    for(i = 0; i < 5; i++){
        printf("%u \n", &A[i]);
    }
    return 0;
}