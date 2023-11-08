#include <stdio.h>
struct Employee
{
	char name[20];
	int salary;	
};
void main()
{
     struct Employee e1;
	 printf("enter employee name: ");
	 scanf("%s",e1.name);
	 printf("enter employee salary: ");
	 scanf("%d",&e1.salary);
	 
	 	printf("employee name: %s",e1.name);
	 	printf("\nemployee salary: %d",e1.salary);
}



