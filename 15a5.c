#include<string.h>
#include<stdio.h>
void main()
{
	int n,count=0,i;
	char a[100];
	printf("enter the string ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
