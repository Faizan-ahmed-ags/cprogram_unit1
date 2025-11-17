#include<stdio.h>
int main(){
    int x=10 ;
         printf("initial x = %d\n",x);
    x += 5; // x = x + 5
         printf("after x += 5, x = %d\n", x);
    x -= 3; // x = x - 3
         printf("after x -= 3, x = %d\n", x);
    x *= 2; // x = x * 2
         printf("after x *= 2, x = %d\n", x);
    x /= 4; // x = x / 4
         printf("after x /= 4, x = %d\n", x);     
    x %= 3; // x = x % 3
         printf("after x %%= 3, x = %d\n", x);
              
    return 0;
}