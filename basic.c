#include <stdio.h>  
int main() {
    char name[20]; 
    int age;
    float marks;
    printf("Enter your name, age, and marks: ");
    scanf("%s %d %f", name, &age, &marks);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    return 0;
}
