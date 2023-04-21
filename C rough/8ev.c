//to create function to calculate factorial of given number
#include<stdio.h> 
int facto(int n);
void main()
{
	int n,fact;
	printf("n!: ");
	scanf("%d",&n);
	facto(n);
}
int facto(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial:%d",fact);
}
