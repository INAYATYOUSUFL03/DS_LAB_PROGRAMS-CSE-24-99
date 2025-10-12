#include <stdio.h>

void insertAtBeginning(int arr[], int *size, int value) {
	int i;
    
    for (i = *size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[0] = value;

    (*size)++;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int currentSize = 5;

    printf("Array before insertion: ");
    int i;
    for (i = 0; i < currentSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newValue = 5;
    insertAtBeginning(arr, &currentSize, newValue);

    printf("Array after insertion: ");
    for (i = 0; i < currentSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
