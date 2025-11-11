#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x > 0){
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }
    return 0;
}