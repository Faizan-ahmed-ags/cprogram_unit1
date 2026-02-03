#include <stdio.h>
#include <string.h>

int main() {
    char phone[20];
    int i, len;

    printf("Enter phone number: ");
    gets(phone);

    len = strlen(phone);

    for (i = 0; i < len; i++) {
        if (i < 2 || i >= len - 2)
            printf("%c", phone[i]);
        else
            printf("*");
    }

    return 0;
}