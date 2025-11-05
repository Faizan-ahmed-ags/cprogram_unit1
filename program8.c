#include <stdio.h>
int main() {
    int a, b ;
    printf("Enter two numbers: ");
    scanf("%d %d",&a ,&b);
    if (a>b)
           printf("%d is larger",a);
    else
           printf("%d is larger",b);

  return 0 ;         
}