/*
Name:Elvis kiprutoh
Reg no:PA106/G/29295/25
Description:c program converting degrees celcius to fohrenheit
*/

#include <stdio.h>

float convert_to_celcius(float fohrenheit){
	return(fohrenheit-32)*5/9;
}
int main(){
	
	float fohrenheit,celcius;
	
	printf("Enter temperature in fohrenheit:");
	scanf("%f",&fohrenheit);
	
	celcius=convert_to_celcius(fohrenheit);
	printf("Temperature in celcius:%2fc\n",celcius);
	
	return 0;
}