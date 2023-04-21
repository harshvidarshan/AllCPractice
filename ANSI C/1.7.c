#include<stdio.h>
int main()
{
	int a=20,b=10,x,y;
	x=add(a,b);
	y=sub(a,b);
	printf("Add %d+%d:%d",a,b,x);
	printf("\nSub %d-%d:%d",a,b,y);
	return x;
	return y;
}
int add(int a,int b)
{
	return a+b;

}
int sub(int a,int b)
{
	int y;
	return a-b;
}

