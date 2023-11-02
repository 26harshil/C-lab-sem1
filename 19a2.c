#include<stdio.h>
void arry(int []);
void   main()
{
	int i;
	int a[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	arry(a);
	//int res = arry(a);	printf("%d",res);
}
void arry(int a[])
{
	 int i;
	 for(i=0;i<5;i++)
	 {
	 	printf("\n%d",a[i]);
	 	
	 }
	 
	 
}
