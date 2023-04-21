//print sum of 1 to n
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum:%d",sum);
}
	
