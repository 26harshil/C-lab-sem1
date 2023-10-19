#include<stdio.h>
void main()
{ 
 int i,j,n,count=0,z;
    printf("enter the size of arr 1 :");
     scanf("%d",&n);
     printf("which nmuber want : ");
     scanf("%d",&z);
   int a[n],b[n];
   for(i=0;i<n;i++)
   {
   	printf("\nenter the element of  1 : ");
   	scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   	if(a[i]==z)
   	  {
   		count=0;
	   }
	   else
	   {
	   	count++;
	   }
   }
  if(count==0)
  {
  	printf("yes");
  }
  else
  {
  	printf("the number is not found");
  }
}
