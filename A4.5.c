//WAP to printf sum of series = 1+1/4+1/9 ... + 1/n*n//
#include<stdio.h>
int main()
{
	int n;
	float i;
	float sum=0.00;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(i=1;i<=n;i++)
	{
		sum+=(1.0/(i*i));
	}
	printf("\n Sum of series = %0.2f",sum);
}
	return 0;
}
