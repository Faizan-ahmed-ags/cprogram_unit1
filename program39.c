//write a program to check user id and password validation
#include<stdio.h>
#include<string.h>
int main(){
    char user_id[20], password[20];
    printf("Enter User ID: ");
    scanf("%s", user_id);
    printf("Enter Password: ");
    scanf("%s", password);
    if(strcmp(user_id, "admin") == 0 && strcmp(password, "password") == 0){
        printf("Login successful!\n");
    }
    else{
        printf("Invalid User ID or Password.\n");
    }
    return 0;
}