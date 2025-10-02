/*
Name:Elizabeth Njeri
Reg no:CT101/G/26440/25
Description:water bill calculation
*/
#include<iostream>


int main()
{//variable declaration 
 int units;
 float total;
 
 //prompt the user to enter the units 
 printf("enter the units");
 scanf("%d",&units);
 
 if(units<=20){
 (total= units*20);
 }
 else if(units>=60){
 (total=units*25);
 }
 else{
 total =units*30;
 }
 //calculation of the water bill
 printf("total water bill:%.2f kes\n",total);  
    return 0;
}