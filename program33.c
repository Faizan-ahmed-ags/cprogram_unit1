#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int freq[256] = {0};
    int i, max = 0, maxChar = 0, index = 0;
    int len;

    printf("Enter string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++)
        freq[str[i]]++;

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxChar = i;
        }
    }

    if (max > (len + 1) / 2) {
        printf("Rearrangement not possible");
        return 0;
    }

    while (freq[maxChar]--) {
        result[index] = maxChar;
        index += 2;
    }

    for (i = 0; i < 256; i++) {
        while (freq[i]--) {
            if (index >= len)
                index = 1;
            result[index] = i;
            index += 2;
        }
    }

    result[len] = '\0';
    printf("Rearranged string: %s", result);

    return 0;
}