//average using array
#include<stdio.h>
void main()
{
	int i,arr[20],n,sum=0,ave;
	printf("enter size: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("array elements a[%d]:",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("sum: %d",sum);
	ave=sum/n;
	printf("\naverage:%d",ave);
}
