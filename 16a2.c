#include<stdio.h>
void main()
{ 
 int i,j,n,m,neg=0,zero=0,pos=0;
    printf("enter the row:");
     scanf("%d",&n);
     printf("enter the the cols");
     scanf("%d",&m);
   int a[n][m];
   for(i=0;i<n;i++) 
   {
   	for(j=0;j<m;j++) 
	   {
   	     printf("enter the element of  a[%d][%d] ",i,j);
      	 scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<n;i++) 
   {
   	for(j=0;j<m;j++) 
	   {
   	     if(a[i][j]<0)
   	     {
   	     	neg++;
		 }
		 else if(a[i][j]==0)
		 {
		 	zero++;
		 }
		 else 
		 {
		 	pos++;
		 }
       }
   }
   printf(" pos is %d",pos);
   printf("\nneg is %d",neg);
   printf("\nzero is %d",zero);
}
