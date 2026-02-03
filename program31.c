#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("String is a rotation");
    else
        printf("String is not a rotation");

    return 0;
}