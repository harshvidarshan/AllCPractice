//WAP to print variable,address of pointer and ptr to ptr variable
#include<stdio.h>
int main()
{
	int a=20;
	int *ptr,**pptr;
	ptr=&a;
	pptr=&ptr;
	printf("%d",*ptr);
	printf("  %d",**pptr);
}
