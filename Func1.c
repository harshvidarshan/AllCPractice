//addition of two numbers using function add(int,int)//
#include<stdio.h>
int add(int,int);
int main()
{
	int x,y;
	printf("x: ");
	scanf("%d",&x);
	printf("y: ");
	scanf("%d",&y);
	add(x,y);
}
int add(int x,int y)
{
	printf("Addition of two numbers:%d",(x+y));
	return 0;
}


