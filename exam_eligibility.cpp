/*
Name :Elizabeth Njeri
Reg no:CT101/G/26440/25
Description:Exam eligibility
*/
#include<studio.h>

int main()
{// variable declaration 
float attendance ;
float average ;

// prompt the user to enter attendance 
printf("enter your attendance");
scanf("%f",&attendance);

//prompt user to enter marks 
printf("enter your marks");
scanf("%f",&average);

// checking eligibility
if(attendance>=75&&average>=40){
printf("student eligible for the final exam");
}
else{
printf("student not eligible for the final exam");
}
    
    return 0;
}