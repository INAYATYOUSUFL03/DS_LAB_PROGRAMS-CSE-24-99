#include <stdio.h>

void stringCopy(char *dest, const char *src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') {
        i++;
    }
}

int main() {
    char source[100], destination[100];
    printf("Enter source string: ");
    gets(source);

    stringCopy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}
