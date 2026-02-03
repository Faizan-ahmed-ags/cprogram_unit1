#include <stdio.h>

int main() {
    char email[100];
    int i = 0;

    printf("Enter email ID: ");
    gets(email);

    printf("Username: ");
    while (email[i] != '@' && email[i] != '\0') {
        printf("%c", email[i]);
        i++;
    }

    return 0;
}