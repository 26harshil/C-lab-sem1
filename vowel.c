#include<stdio.h>
void main()
{
	char x;
	printf("enter the char =");
	scanf("%c",&x);
	
	if(x=='a'||x=='i'||x=='o'||x=='e'||x=='u'||x=='A'||x=='U'||x=='I'||x=='o'||x=='E')
	{
		printf("the char is vowel");
	}
	else
	{
		printf("the char is consonent");
	}
}
