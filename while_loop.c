/*
Name:Elvis kiprutoh
Reg no:PA106/G/29295/25
Description:c program showing bank atm withdraw until balance becomes zero or negative
*/

#include <stdio.h>
int main () {
	float balance;
	
	printf("Enter initial account balance: ");
	scanf("%f", &balance);
	
	while(balance>0){
		float withdraw;
		printf("Enter amount to withdraw: ");
		scanf("%f", &withdraw);
		
		balance -=withdraw;
		
		if(balance>0){
			printf("withdrawal successful.Remaining balance: %.2f\n",balance);
			
		}	else{
				printf("withdrawal successful.Your account is now overdrawn or empty.\n ");;
			}
		}
	printf("Transaction ended.Final balance: %.2f\n",balance);
	return 0;
}