#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int key, i;

    printf("Enter string: ");
    gets(str);

    printf("Enter key: ");
    scanf("%d", &key);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char base = islower(str[i]) ? 'a' : 'A';
            str[i] = (str[i] - base + key) % 26 + base;
        }
    }

    printf("Encrypted string: %s", str);

    return 0;
}