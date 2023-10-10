#include<stdio.h>
void main()
{
	
	int a;
	printf("enter the number ");
	scanf("%d",&a);
	switch(a)
	{
	
	case 0 : printf("sunday");
	break;
	case 1 : printf("monday");
	break;
	case 2 : printf("tuesday");
	break;
	case 3 : printf("wednesday");
	break;
	case 4 : printf("thursday");
	break;
	case 5 : printf("friday");
	break;
	case 6 : printf("saturday");
	break;
	default : printf("enter the valid number");
}
	
}
