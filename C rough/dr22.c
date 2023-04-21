//factorial using recursion
#include<stdio.h>
int facto(int);
void main()
{
	int n,m;
	printf("n: ");
	scanf("%d",&n);
	m=facto(n);
	{
	printf("fact:%d",m);
}
}
int facto(int n)
{

	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*facto(n-1);
	}
}
