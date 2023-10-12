#include<stdio.h>
void main()
{
	int n,i,a,j;
	
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=n;
		for(j=1;j<=i;j++)
		{
			printf("%d",a);
			a--;
		}
		printf("\n");
	}
}
