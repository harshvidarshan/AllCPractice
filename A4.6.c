//WAP to print series 1,4,9,16...N terms//
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the value (n): ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==n)
		{
			printf("%d * %d", i,i);
		}
		else
		{
			printf("%d * %d , ", i,i);
		}
		i++;
	}
	return 0;
}
