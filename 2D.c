/*
Name:Elvis kiprutoh
Reg no:PA106/G/29295/25
Description:2D array showing room occupancy
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 	
	int occupancy[5][10]={{0,1,2,3,4,5,6,7,8,9}};
	int floor,room;
	int occupied,vacant;
	
	srand(time(0));
	
	printf("room occupation(1=occupied,0=vacant):\n");
	
	for(floor=0;floor<5;floor++ ){
	 occupied=1,vacant=1;
	 
	 for(room=0;room<10;room++){
	occupancy[floor][room]=rand()%2;
	
	if(occupancy[floor][room]==1)
		occupied++;
	
	else
		vacant++;
		 
	 }	
	 printf("floor %d->occupied:%d,vacant:%d\n",floor+1,occupied,vacant);

	return 0;
}  