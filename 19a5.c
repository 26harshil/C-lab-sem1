#include<stdio.h>
#include<string.h>
char alpha(char a[],char b,char c );
void main()
{
	char a[100];
	char b;
	char c;
	printf("enter the string  : ");
	gets(a);
	printf("with which char : ");
	scanf("\n%c",&c);
	printf(" replace  with : ");
	scanf("\n%c",&b);

     alpha(a,b,c);
	
}
char alpha(char a[],char b,char c)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==c)
		{
			a[i]==b;
		   
		}		
	}
	puts(a);	
}

