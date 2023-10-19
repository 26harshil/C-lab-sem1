#include<stdio.h>
void main()
{ 
 int i,j,n;
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
   	printf("\nenter the element of  2 : ",i);
   	scanf("%d",&b[i]);
   }
    for(i=0;i<n;i++)
   {
   	a[i]=b[i];
   }
   for(i=0;i<n;i++)
   {
   	printf("\n%d",a[i]);
   }
   
   
	
}
