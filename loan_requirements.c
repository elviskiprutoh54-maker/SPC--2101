/*
Name:Elvis kiprutoh 
Reg no:PA106/G/29295/25
Description:c program to determine loan requirements 
*/

#include<stdio.h>
int main (){
int age;
double income;
  
  printf("Enter your age ");
  scanf("\n%d",&age );
  printf("your age is %d",age);
  
  printf("Enter your income ");
  scanf("\n%lf",&income );
  printf("your income is %ld",income);
  
  if(age>=21 && income>=21000){
  printf("\n congratulations you qualify for loan application");
  } else {
  printf("\n unfortunately you are unable to apply for loan at this time");
  }
  
    return 0;
    }
    
    


    