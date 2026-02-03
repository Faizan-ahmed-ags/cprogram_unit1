#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int n, len, i, j = 0;

    printf("Enter the string: ");
    gets(str);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &n);

    len = strlen(str);
    n = n % len;   // handles large N

    // Copy characters from position n to end
    for (i = n; i < len; i++) {
        temp[j++] = str[i];
    }

    // Copy first n characters to the end
    for (i = 0; i < n; i++) {
        temp[j++] = str[i];
    }

    temp[j] = '\0';

    printf("Left rotated string: %s", temp);

    return 0;
}