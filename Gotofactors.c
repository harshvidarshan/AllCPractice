//WAP to find factors of n using goto//
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n: ");
	scanf("%d",&n);
	odd:
	if(n%i==0)
	{
		printf("%d\n",i);
	}
	i=i+1;
	if(i<=n)
	{
		goto odd;
	}
    return 0;	
}

