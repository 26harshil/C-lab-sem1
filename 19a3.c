#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	printf("enter the string  : ");
	gets(a);
	printf("enter the string   2 : ");
	gets(b);
	printf("\n%d",strlen(a));
    printf("\n%s",strupr(a));
    printf("\n%s",strlwr(a));
    printf("\n%s",strcat(a,b));
    printf("\n%s",strcpy(a,b));
    
    
    
	
}
