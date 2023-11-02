#include<stdio.h>
int facT(int);
void main()
{  int a;

    printf("enter the value ");
	scanf("%d",&a);
	int  res = facT(a);
	printf("the fact is : "%d",res);
}
int facT(int a){

	int c=1,i;
	for (i=1;i<=n;i++)
	{ 
	 c=c*i;
	}
	return c;
}
