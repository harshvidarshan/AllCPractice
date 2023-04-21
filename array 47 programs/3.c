//print 5 values of integer array
#include<stdio.h>
int main()
{
	int i,arr[100],n;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("\narray elements are: %d",arr[i]);
	}
}
