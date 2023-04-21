//sum of first and last digit of given number
#include<stdio.h>
void main()
{
	int n,p,m,sum,i;
	scanf("%d",&n);
	while(n>1 && n!=0)
	{
		n=n/10;
	}
	p=n%10;
	sum=n+p;
	printf("\nsum:%d\n",sum);
}
