#include<stdio.h>

   void main()
   {
   	int n;
   	
   	printf("Enter the size of an array :");
    scanf("%d",&n);
    
    int i=0,arr[i],sum=0,avg=0,min,max;
    
    for(i=0;i<n;i++){
    	
    	printf("Enter the elements of arr[%d] :",i);
    	scanf("%d",&arr[i]);
    	
	}
         	for(i=0;i<n;i++){
	        sum = sum + arr[i];
			
             }
      	
  	avg = (sum/n);
	
	     int a=arr[0],b=arr[0];
	     //arr[0]=a;
	      for(i=1;i<n;i++){
	      	
	      	if(a<arr[i]){
	      		a=arr[i];
	      	}
	      		
				  else if(b>arr[i]){
				  	a =arr[i];
				  }
		 
   }
    printf("sum of all elements :%d\n",sum);
    printf("the average is : %d\n",avg);
    printf("max :%d\n",a);
    printf("min :%d\t",b);
}