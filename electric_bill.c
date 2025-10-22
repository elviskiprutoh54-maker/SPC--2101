/*
Name:Elvis kiprutoh
Reg no:PA106/G/29295/25
Description:c program showing electric bill
*/

#include <stdio.h>

float calculate_electric_bill(int units){
	float bill;
	
	if(units <=100){
		bill=units*10;
	}
	else if(units<=200)
	{
		bill=(100*10)+ ((units-100)*15);
	}
	else{
		bill=(100*10)+(100*15)+((units-200)*20);
	}
	return bill;
}

int main(){
	int main();
	
	int units;
	
	printf("Enter number of units consumed:");
	scanf("%d",&units);
	
	printf("Total bill= Ksh.%2f\n",calculate_electric_bill(units));
	
	return 0;
}