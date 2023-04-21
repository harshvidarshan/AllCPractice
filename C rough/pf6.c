//check prime or not..
#include<stdio.h>
void main()
{
	int i,n;
	int prime=0;
	printf("n: ");
	scanf("%d",&n);
	 for(i=2;i<n;i++)
	{
	if(n%i==0){
	prime=1;
	printf("not prime:%d",n);
	break;
	}
	}
	if(prime==0)
	{
		printf("prime : %d",n);
	}
}
