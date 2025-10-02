/*
Name :Elizabeth Njeri
Reg no:CT101/G/26440/25
Description:data bundle purchase 
*/
#include<iostream>


int main()
{int choice;

//display the menu 
printf("choose data bundles:\n");
printf("1.100MB @50KES\n");
printf("2.500MB @200KES\n");
printf("3.1GB @350KES\n");
printf("4.2GB @600KES\n");

//prompt the user to enter the choice 
printf("enter your choice(1-4)");
scanf("%d",&choice);

//using switch
switch(choice){
case 1:
printf("you choose 100MB.cost=50KES\n");
break;
case 2:
printf("you choose 500MB.cost=200KES\n");
break;
case 3:
printf("you choose 1GB. cost=350KES\n");
break;
case 4:
printf("you choose 2GB.cost=600KES\n");
break;
default:
printf("invalid choice.\n");
}
    
    return 0;
}