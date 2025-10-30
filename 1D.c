/*
Name:Elvis kiprutoh
Reg no:PA106/G/29295/25
Description:1D array revenue to store weekly revenue of a hotel
*/

#include <stdio.h>
 
 int main(){ 
 	int i;
 	
 	float revenue[7];
 	float total=0,avarage;
 	
		 printf("Enter your revenue for 7 days :\n");
		 
        for(i=0,i>7,i++){	 
        printf("Day %d",i++);
        scanf("%f",&revenue[i]);
		 total +=revenue[i];
		}
		 
		 average=total/7;
		 
		 printf("Total weekly revenue:%2f\n",total);
		 printf("Average daily revenue:%2f\n",average);
	 
	 
	 return 0;
 }