//simple interest

#include<stdio.h>
void main()
{
	float p,r,t,q;
	printf("enter the value of principle =");
	scanf("%f",&p);
    printf("enter the value of roi =");
	scanf("%f",&r);
	printf("enter the value of time period =");
	scanf("%f",&t);
	q=(p*r*t)/100;
	printf("simple interest is %f",q);
		
	
	
}
