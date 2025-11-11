#include<stdio.h>
int main()
{
   int a = 5, b = 10;

   // Logical AND
   if(a < 10 && b > 5)
       printf("Both conditions are true: a < 10 AND b > 5\n");
   else
       printf("At least one condition is false: a < 10 AND b > 5\n");

   // Logical OR
   if(a < 10 || b < 5)
       printf("At least one condition is true: a < 10 OR b < 5\n");
   else
       printf("Both conditions are false: a < 10 OR b < 5\n");

   // Logical NOT
   if(!(a > 10))
       printf("Condition is true: NOT (a > 10)\n");
   else
       printf("Condition is false: NOT (a > 10)\n");

   return 0;
}