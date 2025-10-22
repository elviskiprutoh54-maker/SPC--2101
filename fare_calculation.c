/*
Name:Elvis kiprutoh
Reg no:PA106/G/29295/25
Description:c program to calculate fare
*/

#include <stdio.h>

float calculate_fare(float distance){
	return distance*50;
	
}

int main()
{
	float distance;
	
	printf("Enter distance in km:");
	scanf("%f",&distance);
	
	printf("Total fare= Ksh,%2f\n",calculate_fare(distance));
	return 0;
}