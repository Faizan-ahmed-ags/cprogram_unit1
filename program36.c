#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int at = -1, dot = -1, i;

    printf("Enter email ID: ");
    gets(email);

    for (i = 0; email[i]; i++) {
        if (email[i] == '@') at = i;
        if (email[i] == '.') dot = i;
    }

    if (at > 0 && dot > at + 1)
        printf("Valid Email ID");
    else
        printf("Invalid Email ID");

    return 0;
}