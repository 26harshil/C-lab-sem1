#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("the sum is %d",sum);
}
