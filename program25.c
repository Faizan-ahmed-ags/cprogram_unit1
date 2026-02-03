#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                // Shift characters left
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                j--; // check same position again
            }
        }
    }

    printf("String after removing duplicates: %s", str);

    return 0;
}