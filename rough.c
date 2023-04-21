//WAP using global and static variable//
#include<stdio.h>
int sum(int n);
void main()
{
	int n;
	printf("n: ");
	scanf("%d",&n);
}
int sum(n)
{
	static extern int sum;
	sum=(n*(n+1))/2 ;
	printf("%d",sum);
	return n;
}

