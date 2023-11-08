#include<stdio.h>

   void main()
   {
   	  int arr[1000],n,i,sum=0,avg=0;
   	  
   	  printf("Enter the size of an array :");
   	  scanf("%d",&n);
   	  
   	  
   	     for(i=0;i<n;i++){
   	     	
   	     	printf("Enter the elements of arr[%d] :",i);
   	     	scanf("%d",&arr[i]);
			}
			
			  for(i=0;i<n;i++){
			  	
			  sum = sum + arr[i];
			  	
			  }	
			  
			  avg = sum/n;
			  
			  printf("the sum is : %d\n",sum);
			  printf("the average is :%d",avg);
   }