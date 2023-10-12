#include<stdio.h>
void main()
{
	int n,i,a,k,j;
	
	printf("enter the number :");
	scanf("%d",&n);
	for(i=n;i>=n;i--)
	{
		
	
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
			
		for(j=1;j<=i;j++)
		{
			printf(" *");
			
		}
		printf("\n");
	}
}
