//WAP to print average of n numbers//
#include<stdio.h>
int main()
{
	int i,n;
	float ave;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		ave=(i+n)/n;
	}
		printf("\n average=%0.2f",ave);
	return 0;
}
