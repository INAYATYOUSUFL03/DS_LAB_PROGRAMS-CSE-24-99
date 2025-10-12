#include <stdio.h>

int main() {
   
    int numbers[5]; 

   
    printf("Enter 5 integer values for the array:\n");
    int i;
    for ( i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]); 
    }

    printf("\nElements of the array are:\n");
    for ( i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

     printf("\nThe third element (index 2) is: %d\n", numbers[2]);

    return 0; 
}
