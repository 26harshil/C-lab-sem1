#include<stdio.h>
void main()
{ 
 int i,j,n,m;
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
   	     printf("%d  ",a[i][j]);
         }
         printf("\n");
      }
      
   
}

   
