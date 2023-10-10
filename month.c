#include<stdio.h>
void main()
{
	
	int n;
	printf("enter the number");
	scanf("%d",&n);
	switch(n)
	{
	
	case 1 : printf("january has a 31 days");
	break;
	case 2 : printf("februray has a 28 days");
	break;
	case 3 : printf("march has a 31 days");
	break;
	case 4 : printf("april has  30 days");
	break;
	case 5 : printf("may has a 31 days");
	break;
	case 6 : printf("june has a 30 days");
	break;
	case 7 : printf("july has a 31 days");
	break;
	case 8 : printf("augest has a 31 days");
	break;
	case 9 : printf("september has a 30 days");
	break;
	case 10 : printf("octomber has a 31 days");
	break;
	case 11: printf("november has a 30 days");
	break;
	case 12: printf("december has a 31 days");
	break;
	
	default :printf("enter the valid number");
	break;
}
}
