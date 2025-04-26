#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Declare Arrays in HEAP Memory
    int *P = (int *)malloc(5 * sizeof(int));
    int *Q = (int *)malloc(10 * sizeof(int)); 

    // Initialize Array P with Some Values
    P[0] = 5,
    P[1] = 10;
    P[2] = 15;
    P[3] = 20;
    P[4] = 25;

    // Copy Data of Array P to Array Q
    for(int i = 0; i < 5; i++){
        Q[i] = P[i];
    }

    // Deallocate Memory of Array P
    free(P);

    // Assign New Memory Address of Array Q or Point Array P to Q
    // At this Point, Both the Arrays are pointing to Same Memory
    P = Q;

    // Point Array Q to NULL instead of Previous Memory Address
    Q = NULL;

    // Now Initialize other Array Members
    P[5] = 30;
    P[6] = 35;
    P[7] = 40;
    P[8] = 45;
    P[9] = 50;

    // Print Array P which is extended now.
    for(int i =0; i < 10; i++){
        printf(" \n %d", P[i]);
    }
}