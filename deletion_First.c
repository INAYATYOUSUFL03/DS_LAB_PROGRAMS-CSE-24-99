#include <stdio.h>

void deleteFirstElement(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty, no element to delete.\n");
        return;
    }

    int i;
    for ( i = 0; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteFirstElement(arr, &n);

    printf("Array after deleting first element: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
