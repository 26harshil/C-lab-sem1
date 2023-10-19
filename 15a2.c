
#include<stdio.h>
void main()
{ 
 int i,j,n,count=0;
    printf("enter the size of arr 1 :");
     scanf("%d",&n);
   int a[n],b[n];
   for(i=0;i<n;i++)
   {
   	printf("\nenter the element of  1 : ");
   	scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   	if(a[i]<0)
	   {
	   	count++;
	   }
	   
	   
   }
   printf("%d",count);
}
