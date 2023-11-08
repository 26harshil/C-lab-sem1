#include <stdio.h>
struct student
{
	char name[30];
	float percentage[10];
	int age[10];
};
 void main()
 {
 	struct student s[5]; 
    int i;
    for(i=0;i<5;i++)
    {
    	printf("enter student name: ");
    	scanf("%s",s[i].name);
    	printf("enter student percentage: ");
    	scanf("%f",&s[i].percentage);
    	printf("enter student age: ");
    	scanf("%d",&s[i].age);
	}
	for(i=0;i<5;i++)
	{
		printf("\nstudent name: %s",s[i].name);
    
    	printf("\nstudent percentage: %f",s[i].percentage);
    
    	printf("\nenter student age: %d",s[i].age);
   	}
 }

20.4