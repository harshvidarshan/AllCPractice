//factorial of given number
#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial:%d",fact);
}
