#include <stdio.h>
#include <string.h>

int main() {
    char email[100], domain[50];
    int i, j;

    printf("Enter email ID: ");
    gets(email);

    for (i = 0; email[i] != '@'; i++);

    i++;  // move past '@'
    j = 0;

    while (email[i]) {
        domain[j++] = email[i++];
    }
    domain[j] = '\0';

    printf("Domain: %s", domain);

    return 0;
}