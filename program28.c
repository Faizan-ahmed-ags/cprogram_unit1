#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    gets(str);   // for simplicity (can use fgets also)

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        if (str[i] == ' ') {
            i++;
            continue;
        }
        if (str[j] == ' ') {
            j--;
            continue;
        }

        if (str[i] != str[j]) {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if (flag)
        printf("The string is a palindrome (ignoring spaces).");
    else
        printf("The string is not a palindrome.");

    return 0;
}