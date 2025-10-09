/*
Name:Elvis kiprutoh
Reg no:PA106/G/29295/25
Description:c program implementing a number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int secret_number,guess,attempts =0;
	
	printf("Welcome to the number guessing game!\n");
	printf("I am thinking of a number between 1 and 20.\n");
	
	do{
		printf("Enter your guess: ");
		scanf("%d",&guess);
		attempts++;
		
		if(guess>secret_number){
			printf("Too high!\n");
		}else if(guess<secret_number){
			printf("Too low!\n");
		}else{
			printf("Congratulations!You guessed it right.\n");
			printf("It took you %d attempts.\n",attempts);
		}
	}while(guess!=secret_number);
	
	return 0;
}