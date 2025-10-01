/*
Name :Elvis kiprutoh
Reg no :PA106/G/29295/25
Description : write a program that calculates water bill:
units 0-30  KES = 20 @ unit.
units 31-60 KES = 25 @ unit.
units above 60  KES = 30 @ unit.
*/

#include<stdio.h>
int main () {
	int units;
	float total_water_bill;
	int water_bill;
	
	printf("Enter your units ");
	scanf("%f", &units);
	
	if(units<= 30){
		water_bill=20;} 
		 
 else  if(units >= 31 && units <= 60){
	 water_bill=25;}

if(units> 60){
	water_bill=30;}
	
	total_water_bill=water_bill*units;
	
printf("The total_water_bill  is kes. %.2f KES",total_water_bill);	
return 0;	
}