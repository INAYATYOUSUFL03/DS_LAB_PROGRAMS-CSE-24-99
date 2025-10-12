#include <stdio.h>

int fx(int n);
int gx(int n);

int fx(int n) {
    if (n == 0 || n == 1)
        return 1;  
    else
        return n * gx(n - 1);
}

int gx(int n) {
    return fx(n); 
}
int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, fx(num)); 

    return 0;
}
