#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the  1 " );
	scanf("%d",&a);
	printf("enter the  2 " );
	scanf("%d",&b);
	int *d;
	int *c; 
	c=&b;
	d=&a;
	printf("%d %d \n %d %d",a,b,*c,*d);
	
	
}
