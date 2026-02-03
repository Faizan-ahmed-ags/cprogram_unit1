#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ")
    printf("\nASCII value of each character:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            printf("Character: %c  ASCII: %d\n", str[i], str[i]);
    }

    printf("\nCharacters at even index positions:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0 && str[i] != '\n')
            printf("Index: %d  Character: %c\n", i, str[i]);
    }