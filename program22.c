#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char str[]) {
    char keywords[][10] = {
        "auto","break","case","char","const","continue","default","do",
        "double","else","enum","extern","float","for","goto","if","int",
        "long","register","return","short","signed","sizeof","static",
        "struct","switch","typedef","union","unsigned","void","volatile","while"
    };

    for (int i = 0; i < 32; i++) {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char str[100];
    int i;

    printf("Enter an identifier: ");
    scanf("%s", str);

    // Check first character
    if (!(isalpha(str[0]) || str[0] == '_')) {
        printf("Not a valid identifier\n");
        return 0;
    }

    // Check remaining characters
    for (i = 1; str[i] != '\0'; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            printf("Not a valid identifier\n");
            return 0;
        }
    }

    // Check keyword
    if (isKeyword(str)) {
        printf("Not a valid identifier (keyword)\n");
    } else {
        printf("Valid identifier\n");
    }

    return 0;
}