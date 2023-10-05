#include<stdio.h>
void main()
{
	int a,b,c,d,sum;
	scanf("%d",&a);
        b=a%10;
		printf("last digit id %d\n",b);
		c=a;
		while(a!=0)
		{
			c=a%10;
			a=a/10;
			
			
		
	   }
	   	printf("first digit is  %d\n",c);
	   	sum=b+c;
	   	printf("%d",sum);
	
		
	
	
}
