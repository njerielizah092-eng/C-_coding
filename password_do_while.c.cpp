/*
Name:Elizabeth Njeri
Reg no:CT101/G/26440/25
Description:password do while
*/
#include<stdio.h>
#include<string.h>

int main()
{char password[20];

do{
    printf("Enter password:");
    scanf("%s",password);
}while(strcmp(password,"1234")!=0);

printf("Access granted\n");

    return 0;
}