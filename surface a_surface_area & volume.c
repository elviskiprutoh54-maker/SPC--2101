/*
Name:Elvis kiprutoh 
Reg no:PA106/G/29295/25
Description:radius, height, volume and surface_area of a cylinder 
*/

#include<stdio.h>
int main (){
  float radius,height,volume,surface_area;
  float pi=3.142;
  
  printf("Enter your radius: ");
  scanf("\n%f",&radius );
  printf("your radius is %f", radius);
  
  printf("Enter your height: ");
  scanf("%f",& height );
  printf("\nyour height is %f", height );
  
  volume =3.142*radius*radius*height;
  printf("\n volume is %f", volume);
  
  surface_area=3.142*radius*radius;
  printf("\n surface_area is %f", surface_area);
  
    return 0;
    }
    
    


    