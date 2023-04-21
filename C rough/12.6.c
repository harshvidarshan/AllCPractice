//sum of series 1+4+9+...+n
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
		printf("sum:%d",sum);
}


	

