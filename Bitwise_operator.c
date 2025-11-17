#include<stdio.h>
int main(){
    int a = 5;      // Binary: 0101
    int b = 9;      // Binary: 1001

    printf("a&b = %d\n", a & b);   // Bitwise AND
    printf("a|b = %d\n", a | b);   // Bitwise OR
    printf("a^b = %d\n", a ^ b);   // Bitwise XOR
    printf("~a = %d\n", ~a);       // Bitwise NOT   
    printf("b<<1 = %d\n", b << 1); // Left Shift
    printf("b>>1 = %d\n", b >> 1); // Right Shift
    return 0;
}