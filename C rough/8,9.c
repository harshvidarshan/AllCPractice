//swap two numbers once call by value & other call by reference
/*//call by value
#include<stdio.h>
void swap(int a, int b);
void main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(a,b);
}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nswapped values:%d%d",a,b);
} */
//call by reference
#include<stdio.h>
int swap(int *a, int *b);
void main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(&a,&b);
}
int swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nswapped values:%d%d",*a,*b);
}

