/*
Name:Elvis kiprutoh 
Reg no: PA106/G/29295/25
Description:c program showing mobile data purchase
*/

#include<stdio.h>
int main(){
	int choice;
	printf("Select your choice");
	printf("\n1. 100MB @ 50 KES");
	printf("\n2. 500MB @ 200KES");
	printf("\n3. 1GB @ 350KES"); 
	printf("\n4. 2GB @ 600KES");
	printf("\n Enter your choice 1-4: ");
	scanf("%d",&choice);
	switch(choice)
	
	{
	case 1:
		printf("\n you selected 100MB cost=50KES");
		break;
	case 2:
		printf("\n you selected 500MB cost=200KES");
		break;
	case 3:
		printf("\n you selected 1GB cost=350KES");
		break;
	case 4:
		printf("\n you selected 2GB cost=600KES");
		break;
	default:
		printf("\n Invalid choice");
		break;
	}
	return 0;
	}