#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr;
    int n=5;
    ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL){
         printf("Memory allocation failed\n");
         return 1;
  }
    for(int i=0; i<n; i++){
         ptr[i] = i + 1;
    }
    printf("The elements in the array are:\n");
    for(int i=0; i<n; i++){
         printf("%d ", ptr[i]);
    }

    free(ptr);
    ptr = NULL;
    return 0;
}
