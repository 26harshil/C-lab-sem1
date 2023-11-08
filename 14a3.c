#include<stdio.h>

   void main()
   {
   	int n;
   	
   	printf("Enter the size of an array :");
    scanf("%d",&n);
    
    int i=0,arr[i],even=0,odd=0;
    
    for(i=0;i<n;i++){
    	
    	printf("Enter the elements of arr[%d] :",i);
    	scanf("%d",&arr[i]);
    	
	}
	      for(i=0;i<n;i++){
	      	
	      	if((arr[i])%2==0){
	          	even++;
			  }
			else{
				odd++;
			}
		  }
		  
		  printf("even :%d  odd :%d",even,odd);
		  
   }