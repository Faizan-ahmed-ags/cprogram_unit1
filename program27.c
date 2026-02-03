#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], smallest[50], largest[50];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Read first word
    while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
        smallest[j] = largest[j] = str[i];
        i++;
        j++;
    }
    smallest[j] = largest[j] = '\0';

    // Process remaining words
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            i++;
            j = 0;

            while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
                word[j++] = str[i++];
            }
            word[j] = '\0';

            if (strlen(word) > 0) {
                if (strlen(word) < strlen(smallest))
                    strcpy(smallest, word);

                if (strlen(word) > strlen(largest))
                    strcpy(largest, word);
            }
        } else {
            i++;
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}