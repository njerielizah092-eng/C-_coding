/*
Name:Elizabeth Njeri
Reg no:CT101/G/26440/25
Description :C program for access to bank loan
*/

#include<stdio.h>


int main(){

//variable declaration
int age;
float income;

//prompt user to enter age
printf("enter your age:");
scanf("%d",&age);
//prompt user to enter income
printf("enter ur annual income:");
scanf("%f",&income);

//check eligibility
if(age>=21&&income>=21000){
printf("Congratulations you qualify for a loan");
}
else{
printf("unfortunately,we are unable to offer you a loan at this time.");
}
    
    return 0;
}