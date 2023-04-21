//prime or not + sum & reverse
/*#include<stdio.h>
void main()
{
	int i,m,n,sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;n>0;i++)
	{
		m=n%10;
		n=n/10;
		printf("\n%d",m);
		sum=sum+m;
	}
	printf("\nsum:%d",sum);
} */
/*#include<stdio.h>
void main()
{
	int i,n,prime=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			prime=1;
			printf("not prime:%d",n);
			break;
		}
	}
	if(prime==0)
	{
		printf("prime:%d",n);
	}
	else if(n==1)
	{
		printf("not prime:%d",n);
	}
} */

