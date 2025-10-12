#include <stdio.h>

void insertLast(int arr[], int *n, int val) {
    
    arr[*n] = val;
  
    (*n)++;
}

int main() {
    int arr[7] = {10, 20, 30, 40, 50}; 
    int n = 5;
    int val = 25;

    printf("Array before insertion: ");
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertLast(arr, &n, val);

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
