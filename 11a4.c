#include<stdio.h>
void main()
{
	int n=1,i,x,y;
	printf("enter the base x");
	scanf("%d",&x);
	printf("enter the base y");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
	   n=n*x;
	}
	printf("%d",n);
}
