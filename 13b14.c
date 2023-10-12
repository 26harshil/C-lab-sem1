#include<stdio.h>
void main()
{
	int n,i,a,k,j;
	char h=65;
	
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		if(i%2==1)
		{
		  for(k=1;k<=i;k++)
		  {
			printf(" %d",k);
	      }
	    }
	      	else 
			  {
			  	for(j=0;j<i;j++)
				  {
	      		    printf(" %c",h);
	      		    h++;
	      	      }
			  }
			  printf("\n");
	   }
	
	}

