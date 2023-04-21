//WAP to find maximum number from two numbers using function//
#include<stdio.h>
void max(int,int);
void main()
{
	int x,y;
		printf("x: ");
	scanf("%d",&x);
	printf("y: ");
	scanf("%d",&y);
	max(x,y);
}
void max(int x, int y)
{
	if(x>y)
{
		printf("max. of two numbers:%d",x);
	}
	else
	{
		printf("max. of two numbers:%d",y);
	}
}
