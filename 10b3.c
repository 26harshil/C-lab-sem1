#include<stdio.h>
void main()
{ int n,i,sum=0,rem;
printf("enter the number");
scanf("%d",&n);
 n=i;
 while(n!=0)
 {
  rem=n%10;
  sum=(sum*10)+rem;
  n=n/10;
 	
 }
 if(sum==i)
 {
 	printf("pelindrom number");
 }
 else
 {
 	printf("not pelindrom");
 }

	
}
