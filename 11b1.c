#include<stdio.h>
void main()
{
	int n,i,a=0,b=1,c;
	printf("enter the number");
	scanf("%d",&n);
	printf("0 1 ");
	for(i=2;i<=n;i++)
	{
	    c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	
		
	}
}

