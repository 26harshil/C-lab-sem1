#include<stdio.h>

	int add(int,int);
	void main()
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int res = add(a,b);
		printf(" the sum is %d",res);
	}
		int add(int a,int b)
		{
			int	sum = a+b;
			return sum;
		}

