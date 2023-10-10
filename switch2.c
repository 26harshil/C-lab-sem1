#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n>=1 && n<12)
	{
	
	switch(n){
	
	case 2: printf(" feb has 28 days");
	case 4:
	case 6:
	case 9:
	case 11:
		printf(" month has a 30 days");
		break;
	default : printf("month has 31 days");
	break;
		
		
		
		}

}
else
{ printf("enter valid num");
}
}
