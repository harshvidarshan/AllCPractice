//WAP to check number is prime or not//
#include<stdio.h>
int prime(int);
int main()
{
	int x;
	printf("x: ");
	scanf("%d",&x);
	prime(x);
}
int prime(int x)
{
	if(x%1==0 && x>=2 && )
	{
		printf("%d is prime",x);
	}
	else
	{
		printf("%d is not prime",x);
	}
}
