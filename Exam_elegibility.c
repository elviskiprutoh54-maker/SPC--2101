/*
Name:Elvis kiprutoh
Reg no: PA106/G/29295/25
Description:Exam elegibility
*/

#include<stdio.h>
int main(){
	int attendance;
	int marks;
	
	printf("Enter your attendance \n");
	scanf("%d",&attendance);
	
	printf("Enter your marks \n");
	scanf("%d",&marks);
	
	if(attendance >=75 ) {
		printf("you are able to sit for an exam");
	}
	
	else{
		printf("you are not able to sit for exam");
	}
	
	if(marks >=40 ){
		printf("you passed your exams");
	}
	
	else{
		printf("you did not pass your exams");
	}
	
	return 0;
}