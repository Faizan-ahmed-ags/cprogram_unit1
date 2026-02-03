#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char pass[100];
    int i, u=0, l=0, d=0, s=0;

    printf("Enter password: ");
    gets(pass);

    if (strlen(pass) < 8) {
        printf("Weak Password");
        return 0;
    }

    for (i = 0; pass[i]; i++) {
        if (isupper(pass[i])) u++;
        else if (islower(pass[i])) l++;
        else if (isdigit(pass[i])) d++;
        else s++;
    }

    if (u && l && d && s)
        printf("Strong Password");
    else
        printf("Weak Password");

    return 0;
}