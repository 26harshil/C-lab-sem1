#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the value ");
	scanf("%d",&n);
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	while(n!=0)
	{
		j=n%10;
		n=n/10;
		switch(j)
		{
			case 0 : arr[0]++;
			break;
			case 1 : arr[1]++;
			break;
			case 2 : arr[2]++;
			break;
			case 3 : arr[3]++;
			break;
			case 4 : arr[4]++;
			break;
			case 5 : arr[5]++;
			break;
			case 6 : arr[6]++;
			break;
			case 7 : arr[7]++;
			break;
			case 8 : arr[8]++;
			break;
			case 9 : arr[9]++;
			break;
		
			
		}
		
		
	}
	  for(i=0;i<10;i++)
 {
	if(arr[i]>0)
	{
		printf("the fre of %d id %d",i,arr[i]);
	}
	
}
     if(arr[i]>0)
     {
     	printf(" the freq is %d is the %d\n",i,arr[i]);
	 }
	  
 } 
