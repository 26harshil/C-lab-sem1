#include <stdio.h>
struct student
{
   char name;
   int rollno;	
};
union employee
{
    char name;
	int no;	
};
void main()
{
	struct student s1;
	union employee e1;
	printf("\n%d",sizeof(s1));
	printf("\n%d",sizeof(e1));
}
20.3