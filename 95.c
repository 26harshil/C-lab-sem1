#include<stdio.h>
void main()
{
	int n,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%3d",i);
		}
		i++;
	}
	
	
	
}
