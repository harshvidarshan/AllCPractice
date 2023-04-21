//swap using call by reference
#include<stdio.h>
void swap(int *a, int *b);
void main()
{
	int a,b;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	swap(&a,&b);
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("swapped values:%d %d",*a,*b);
}
