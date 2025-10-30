/*
Name:Elizabeth Njeri 
Reg no:CT101/G/26440/25
Description:1D array 
*/
#include<stdio.h>

int main()
{  int i;
   int sum=0;
   float average ;
   int revenue [7];
     //declare and initialize 1Darray 
   
    //for(start;stop;step;)
   for (i=0; i<7;i++){
    printf("day %d:",i+1);
    scanf("%d",&revenue[i]);
     sum +=revenue[i];
     }
     
     average=sum/7.0;
     printf ("Average daily revenue:%.2f\n",average);
     printf("Total weekly revenue:%d\n",sum);
    
    
    return 0;
    }