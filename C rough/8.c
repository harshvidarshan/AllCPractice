//remove zero entry
#include<stdio.h>
int main()
{
	int i,arr[20],n;
	printf("Enter no. of array elements: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter array elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
