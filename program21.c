#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')   // to ignore newline character
            printf("Character: %c  ASCII value: %d\n", str[i], str[i]);
    }

    return 0;
}