#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,sum,sum2;
	printf("the a is ");
	scanf("%f",&a);
	printf("the b is ");
	scanf("%f",&b);
	printf("the c is ");
	scanf("%f",&c);
	if(4*a*c<=b*b)
	{
	sum=((-b)-sqrt(b*b-4*a*c))/(2*a);
	printf("the sum is %f",sum);
	sum2=((-b)+sqrt(b*b-4*a*c))/(2*a);
	
	printf("the sum is %f",sum2);
		
	}
	else
	printf("root is imagnary");
}
