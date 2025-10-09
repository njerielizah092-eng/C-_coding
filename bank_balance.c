/*
Name:Elizabeth Njeri
Reg no:CT101/G/26440/25
Description:bank ATM to display balances while loop
*/
#include<stdio.h>

int main()
{//variable declaration
 int balance =1000;
 int withdraw ;
 
 while (balance>0){
 printf("enter amount to withdraw:");
 scanf("%d",&withdraw);
 balance-=withdraw;
 printf("New balance:%d \n",balance);
 }
 printf("insufficient balance");
    return 0;
}