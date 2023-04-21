//add 1 to each 15 elements of array
#include<stdio.h>
int main()
{
	int i,arr[100],n,sum[100];
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		sum[i]=arr[i]+1;	
	}
	for(i=0;i<=n;i++)
	{
		printf("\nenter each element after adding 1:%d",sum[i]);	
	}
}
