#include<stdio.h>

   void main()
   {
   	int n;
   	
   	printf("Enter the size of an array :");
    scanf("%d",&n);
    
    int i,arr[n],positivecount=0,negativecount=0,countzero=0;
    
    for(i=0;i<n;i++){
    	
    	printf("Enter the elements of arr[%d] :",i);
    	scanf("%d",&arr[i]);
    	
	}
	      for(i=0;i<n;i++){
	      	
	      	if(arr[i]>0){
	      		positivecount++;
			  }
			else if(arr[i]<0){
				negativecount++;
			}
			else{
				countzero++;
			}
		  }
		  printf("positive count :%d negative count: %d zero count : %d",positivecount,negativecount,countzero);
   }