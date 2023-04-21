//sum and average of all array
#include<stdio.h>
int main()
{
	int i,arr[100],n,sum=0,ave;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements: ");
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		ave=sum/n ;
	}
	printf("Sum and ave:%d %d",sum,ave);
}
