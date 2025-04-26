#include <stdio.h>

int main() {
	
    
    int A[5] = {1,2,3,4,5};
    
    for(int i =0; i <= 4; i++){
        printf("%d", A[i]);
    }
    printf("\n");
    
    // Accessing with Index
    printf("%d \n", A[3]);

    // Accessing with Index Outside
    printf("%d \n", 3[A]);

    // Accessing with Pointer Arithmetic
    printf("%d \n",*(A+2));
}