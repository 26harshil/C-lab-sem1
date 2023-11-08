#include<stdio.h>
int main () {
	int n,m,k,l;
	printf("Enter the row of matrix:");
  	scanf("%d",&m);
  	printf("Enter the column of matrix:");
  	scanf("%d",&n);
  	printf("Enter the row of second matrix:");
  	scanf("%d",&k);
  	printf("Enter the column of second matrix:");
  	scanf("%d",&l);
  	
  	int i,j;
  	int a[m][n], b[k][l],ans[m][l];
  	
  	for(i=0;i<m;i++){
  	  	  for(j=0;j<n;j++){
  	  	  	   printf("Enter the elements of array a[%d][%d]:",i,j);
  	  	  	   scanf("%d",&a[i][j]);
			  }
		}
		  
		 for(i=0;i<k;i++){
  	  	  for(j=0;j<l;j++){
  	  	  	   printf(" Enter the elements of array b[%d][%d]:",i,j);
  	  	  	   scanf("%d",&b[i][j]);
			  }
		}
	for(i=0;i<m;i++){
  	  	  for(j=0;j<l;j++){
  	  	  	  ans[i][j]=0;
			  }
		}	
  	
  int s;
  	if(n==k) {
  		int x,y,z;
  		
  		for(x=0; x<m; x++){
  			for(y=0; y<l; y++) {
  				for(z=0; z<n; z++) {
  					ans[x][y] += a[x][z] * b[z][y];
  					
				  }
			  }
		  }
	  }
	  else {
	  	printf("NOt possible");
	  }
	  
	  for(i=0; i<m; i++) {
	  	for(j=0; j<l; j++) {
	  		printf("%d ",ans[i][j]);
		  }
		  printf("\n");
	  }
}