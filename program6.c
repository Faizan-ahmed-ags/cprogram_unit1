#include <stdio.h>
int main(){
    float c, f;
    printf("Enter temparature in celsius:");
    scanf("%f",&c);
    f = (c*9/5) + 32;
    printf("Fahrenheit = %.2f",f);
    return 0;
}