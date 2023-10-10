#include<stdio.h>
void main()
{
	int a,b;
	char c;
	
	printf("chose the performance = ");
	scanf("%c",&c);
	printf("enter the value a = ");
	scanf("%d",&a);
	printf("enter ther value of b =");
	scanf("%d",&b);
	if(c=='+')
	{
		printf("the sum is %d",a+b);
	}
	else if(c=='-')
	{
		printf("the sum is %d",a-b);
	}
	else if(c=='*')
	{
		printf("the sum is %d",a*b);
	}
	else if(c=='/')
	{
		printf("the sum is %d",a/b);
		
	}
	else
	{
	printf("chose the coreect symbol");
	}
}
