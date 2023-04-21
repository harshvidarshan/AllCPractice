//WAP to find sum of first N odd numbers.Ex. 1+3+5+..+n
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("sum of odd numbers=%d",sum);
	return 0;
}
