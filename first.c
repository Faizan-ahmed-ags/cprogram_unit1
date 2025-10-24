#include <stdio.h>

int main() {
    // Declaring variables
    int a = 10;
    int b = 3;
    
    // Addition
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    
    // Subtraction
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    
    // Multiplication
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    
    // Division
    printf("Division: %d / %d = %d\n", a, b, a / b);
    
    // Modulus (remainder)
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    
    // Float division example
    float x = 10.0;
    float y = 3.0;
    printf("Float Division: %.2f / %.2f = %.2f\n", x, y, x / y);
    
    return 0;
}