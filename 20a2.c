#include <stdio.h>
struct Book
{
	char title[30];
	char author[30];
	char publication[30];
	int price;
};
void main()
{
    struct Book b1;
	int i;
	for(i=0;i<3;i++)
	{
	   printf("enter book title: ");
	   scanf("%s",b1[i].title);
	   printf("enter book author: ");
	   scanf("%s",b1[i].author);
	   printf("enter book publication: ");
	   scanf("%s",b1[i].publication);
	   printf("enter book price: ");
	   scanf("%d",&b1[i].price);	
	}
		for(i=0;i<3;i++)
	{
	   printf("book title: %s",b1[i].title);
	   
	   printf("\nbook author: %s",b1[i].author);
	  
	   printf("\nenter book publication: %s",b1[i].publication);
	   
	   printf("\nenter book price: %d",b1[i].price);
	   	
	}

20.2