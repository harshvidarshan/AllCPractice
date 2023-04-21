//add two numbers using add(int,int) function..
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main(){
	int a,b,c;
	a=3;
	b=3;
	c=add(a,b);
	printf("%d",c);
	return c;
}
