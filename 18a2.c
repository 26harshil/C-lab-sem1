#include<stdio.h>
int max(int ,int);
int min(int,int);

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int res = max(a,b);
	int res1 = min(a,b);
	printf(" the max is %d",res);
	printf(" \nthe min is %d",res1);
}

