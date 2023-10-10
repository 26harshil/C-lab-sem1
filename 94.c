#include<stdio.h>
void main()
{
	int n,i=1,fac=1;
	scanf("%d",&n);
	
	while(i<=n)
	{
	 fac=fac*i;
	  i++;
	  }
	printf("fac is %d",fac);
}
