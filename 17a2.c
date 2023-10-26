#include<stdio.h>
void main()
{
	int i,f,d,c;
	scanf("%d \n%f \n%lf \n%c",&i,&f,&d,&c);
	printf(" %d = %d  ",i,&i);
	printf(" %f = %d ",f,&f);
	printf(" %ld = %d  ",d,&d);
	printf(" %c = %d  ",c,&c);
	
	
}

