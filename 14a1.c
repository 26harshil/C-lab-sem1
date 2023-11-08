#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the size of an aaray :");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
	
	printf("Enter the array element of arr[%d] : ",i);
	scanf("%d",&arr[i]);
}
	
      for(i=0;i<n;i++){
      	printf("%d",arr[i]);
	  }
	  printf("\n");
	  
	  
	  for(i=n-1;i>=0;i--){
	  	
	  	printf("%d",arr[i]);
	  }
}