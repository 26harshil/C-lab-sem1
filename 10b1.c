#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	printf("enter ther num");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==n)
	{
		printf("perfect number");
	}
	else
	{
		printf("not perfect");
	}
}
