#include<stdio.h>
 float intrest(int , int ,int);
 float intrest(int p,int r,int t)
 {
 	float intrst = (p*r*t)/100.0;
 	return intrst;
 }
 void main()
 {
 	int p,r,t;
 	printf("enter the principle ");
 	scanf("%d",&p);
 	printf("enter the roi ");
 	scanf("%d",&r);
 	printf("enter the time");
 	scanf("%d",&t);
 	int res = intrest(p,r,t);
 	printf("the intrest is %d",res);
 	
 }
