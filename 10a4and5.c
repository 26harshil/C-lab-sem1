#include<stdio.h>
void main()
{
	int n,b,count=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		count++;
		printf("%d",b);
	}
	printf(" the num is %d\n",count);
}

