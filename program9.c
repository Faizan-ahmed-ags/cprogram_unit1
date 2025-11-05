#include<stdio.h>
int main() {
    int P,R,T,SI ;
    printf("Enter the value of principle,rate,time");
    scanf("%d %d %d",&P,&R,&T);
    SI=(P*R*T)/100 ;
    printf("SI=%d",SI);
}