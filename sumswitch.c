#include<stdio.h>
void main()
{
	
char c;
float a,b;

printf("1 = additiom, 2= sub ,3=milti ,4=div \n");
scanf("%c",&c);
printf(" enter the a ");
scanf("%f",&a);
printf("enter the b");
scanf("%f",&b);
switch(c)
{
	case 1: printf("sum = %f",a+b);
		break;
		case 2: printf("sum = %f",a-b);
		break;
		case 3: printf("sum = %f",a*b);
		break;
		case 4: printf("sum = %f",a/b);
		break;
		default : printf(" enter the valid num");
		break;
	}
}

