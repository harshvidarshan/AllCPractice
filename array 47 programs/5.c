//wap to reverse program using 2nd array
#include<stdio.h>
int main()
{
	int i,arr[100],n;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter array elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=n;0<=i;i--)
	{
		printf("%d:reverse order\n",arr[i]);
	}
	return 0;
}
