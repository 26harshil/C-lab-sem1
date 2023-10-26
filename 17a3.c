#include<stdio.h>
void main()
{
	int a,b,sum;
    printf("ente the num 1 :");
    scanf("%d",&a);
    printf("ente the num 2 :");
    scanf("%d",&b);
    int *x;
    int *y;
     x=&a;
     y=&b;
     sum = *x+*y;
     printf("the sum is %d",sum);
}
