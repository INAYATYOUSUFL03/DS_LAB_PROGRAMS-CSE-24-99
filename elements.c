#include <stdio.h> 

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50}; 

    int numElements = sizeof(numbers) / sizeof(numbers[0]);
    printf("Accessing array elements:\n");
    
    int i;
  
    for ( i = 0; i < numElements; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
