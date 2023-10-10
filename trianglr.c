#include<stdio.h>

void main()
{
	float a,b,c,d;
	printf("enter the a =");
	scanf("%f",&a);
	printf("enter the b =");
	scanf("%f",&b);
	printf("enter the c =");
	scanf("%f",&c);
	
	if(a==b && b==c)
	{
		printf("\nthe triangle is equilater ");
	}
	else if(a==b||b==c||a==c)
	{
		printf("\nthe triangle is isoscelse");
	}
	else
	{
	
	printf("the triangle is scalne");
}
	if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
	{
		printf("\nthe triangle is right angle");
		
	}
	
	
}
