#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the value");
	scanf("%d",n);
	while(n!=0)
	{
		n=n%10;
		printf("%d",n);
		n=n/10;
	}
}
