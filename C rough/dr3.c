//number is prime or not
#include<stdio.h>
void main()
{
	int n,i,prime=0;
	printf("Number: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=1;
			printf("\n Not prime:%d",n);
			break;
		}
	}
	if(prime==0)
	{
	printf("prime:%d",n);	
	}
}
