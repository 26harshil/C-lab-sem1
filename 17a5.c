#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the element ");
	scanf("%d",&n);
	 int a[n];
	 int *p;
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	p=a;
	for(i=0;i<n;i++)
	{
		printf("%d ",*p);
		p++;
	}
}
