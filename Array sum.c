//sum of n arrays//
#include<stdio.h>
int main()
{
	int i,n,num[100],sum=0;
	printf("Enter arrays: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array number: ");
		scanf("\n%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum+=num[i];
	}
	printf("sum=%d\n",sum);
	return 0;
}
