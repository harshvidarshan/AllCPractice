//copy array elements to another array elements//
#include<stdio.h>
int main()
{
	int i,j,n,arr[100];
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter elements: ");
		scanf("%d",&arr[i]);
	}
	for(j=i;j<=i;j++)
	{
		arr[i]=arr[j];
	}
		printf("enter copied elements: ",arr[j]);
	return 0;
}
