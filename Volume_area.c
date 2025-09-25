/*
Name:Elizabeth Njeri
Reg no:CT101/G/26440/25
Description:C program for volume and surface area
*/


#include<stdio.h>

int main(){

//variable declaration
float pi=3.142,radius,height;
double volume,surface_area;

//prompt the user to enter radius of the cylinder
printf("enter radius of the cylinder:");
scanf("%f",&radius);

//prompt the user to enter height of the cylinder
printf("enter height of the cylinder:");
scanf("%f",&height);

//compute volume
volume=3.142*radius*radius*height;

//volume display
printf("\n volume is %.2f m",volume );

//compute surface-area
surface_area=2*3.142*radius*radius+2*3.142*radius*height;

//display surface_area
printf("\n surface_area is %.2f m",surface_area);

    return 0;
}