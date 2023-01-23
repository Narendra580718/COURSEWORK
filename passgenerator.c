#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int i;
    int password_length;
    printf("Enter your password length: ");
    scanf("%d",&password_length);

    char password_data[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";

    srand(time(NULL));
    printf("Password: ");
    for(i=0; i<password_length; i++){
        printf("%c",password_data[rand()%sizeof(password_data)-1]);
    }
    return 0;
}

