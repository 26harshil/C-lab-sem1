#include<stdio.h>
void main()
{
	int x,y,mul=1,i=1;
	scanf("%d %d",&x,&y);
	while(i<=y)
	{
		mul = mul*x;
		i++;
	}
	printf("the multipication is = %d",mul);
}
