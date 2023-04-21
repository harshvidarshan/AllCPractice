#include<stdio.h>
void main()
{
	int arr[100],i,n,sum=0;
	printf("n:");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
	{
		printf("array elements:");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
}
