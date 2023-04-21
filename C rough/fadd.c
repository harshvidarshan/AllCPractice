//addition of two numbers using function, maximum of two numbers, power of two number
#include<stdio.h>
#include<math.h>
int add(int a, int b);
int max(int a, int b);
int power(int a,int b);
void main()
{
	int a,b,m;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	add(a,b);
	max(a,b);
	m=pow(a,b);
}
int add(int x, int y)
{
	int m;
	m=x+y;
	printf("result:%d",m);
}
int max(int a, int b)
{
	if(a>b)
	{
		printf("\na is max");
	}
	else
	{
		printf("\nb is max");
	}
}
int power(int a, int b)
{
	int m;
	printf("\n power:%d",m);
}
