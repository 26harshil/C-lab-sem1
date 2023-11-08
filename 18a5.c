#include"stdio.h"

  int  swap(int,int);
  void main(){
  	   int a,b;
  	   printf("Enter the first number :");
  	   scanf("%d",&a);
  	   printf("Enter the second number :");
  	   scanf("%d",&b);
  	   
	   int res = swap(a,b); 
  }
  
  
      int swap(int a,int b){
      	   
      	     a = a+b;
      	     b = a-b;
      	     a = a-b;
      	     
      	    printf("A is : %d\n",a);
      	    printf("B is : %d",b);
      	    
			   
	  }