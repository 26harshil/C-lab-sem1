#include<stdio.h>
void main()
{
	int n,i,fac=1;
	printf("enter the number");
	scanf("%d",&n);
	if(n<0)
	{
		printf("factorial is not possiable");
	}
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("the fac is %d",fac);
}
