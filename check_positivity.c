#include<stdio.h>
int main() {
    int num1, num2;

    // Ask the user to enter two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Check positivity of each number
    if (num1 > 0) {
        printf("First number is positive.\n");
    } else {
        printf("First number is not positive.\n");
    }

    if (num2 > 0) {
        printf("Second number is positive.\n");
    } else {
        printf("Second number is not positive.\n");
    }

    return 0;
}