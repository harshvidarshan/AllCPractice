//find factorial of number using loop
#include<stdio.h>
void main()
{
	int i,fact=1,n;
	printf("Enter any no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
	printf("factorial:%d",fact);
}


