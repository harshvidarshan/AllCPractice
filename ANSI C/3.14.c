// m is multiple of n or not
#include<stdio.h>
int main()
{
	int m,n;
	printf("m: ");
	scanf("%d",&m);
	printf("n: ");
	scanf("%d",&n);
	if(m%n==0)
	{
		printf("\n m is multiple of n");
	}
	else
	{
		printf("\n m isn't multiple of n");
	}
	return 0;
}
