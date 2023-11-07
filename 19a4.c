#include<stdio.h>
#include<string.h>
int num(char a[],char b );
void main()
{
	char a[100];
	char b;
	printf("enter the string  : ");
	gets(a);
	printf("enter the which do you want : ");
	scanf("%c",&b);
	int res = num(a,b);	
	if(res>=1)
	{
	 printf("the alphabet is here");
   }
   else
   {
   	printf("not exist");
   }
}
int num(char a[],char b)
{
	int i;
	int count =0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			count++;
		}
	}
	return count;
}
