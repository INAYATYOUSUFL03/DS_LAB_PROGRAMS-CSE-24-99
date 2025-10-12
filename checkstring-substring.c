#include <stdio.h>

int isSubstring(const char *str, const char *substr) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; substr[j] != '\0' && str[i + j] == substr[j]; j++);
        if (substr[j] == '\0')
            return 1; 
    }
    return 0;
}

int main() {
    char str[100], substr[100];
    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(substr);

    if (isSubstring(str, substr))
        printf("Substring found!\n");
    else
        printf("Substring not found.\n");
    return 0;
}

