#include<stdio.h>
void main()
{
	int a=1,b,c=0,sum=0;
	float avg;
	
	while(a!=0)
	{
	
	printf("enter the num");
	scanf("%d",&a);
	sum=sum+a;
	c++;
	}
   avg =sum/c;
   
   printf("%d\n",sum);
   printf("%f\n",avg);
	
	
}
