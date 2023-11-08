#include<stdio.h>
   float  comp(float,float,float);
  void main(){
  	
  	float a,b,c;
  	printf("Enter the first number : ");
  	scanf("%f",&a);
  	printf("Enter the second number  :");
  	scanf("%f",&b);
  	printf("Enter the  third number  :");
  	scanf("%f",&c);
  	
  	float res = comp(a,b,c);
  	printf("The largest number is  : %f ",res);
  	
  }  
     float comp(float a,float b,float c){
     	
       if(a>b && a>c){
       	
       	return a;
       	
	   }
	   
	   else if(b>a && b>c){
	   	
	   	return b; 
	   	
	   }
	   else {
	   	
	   	return c;
	   }
	      	   
	 }