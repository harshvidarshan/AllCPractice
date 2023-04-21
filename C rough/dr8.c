//swap numbers using user define function
#include<stdio.h>
void swap(int a, int b);
void main()
{
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	swap(a,b);

}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("swappped values: %d %d",a,b);
}
