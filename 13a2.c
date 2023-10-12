#include<stdio.h>
void main()
{
	int n,i,a,j;
	
	printf("enter the number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
}
