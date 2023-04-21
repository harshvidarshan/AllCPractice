//largest element in array
#include<stdio.h>
void main()
{
	int i,arr[200],n,max,a2[100];
	printf("enter size: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("array elements a[%d]:",i);
		scanf("%d",&arr[i]);
		max=arr[0];
		if(arr[i]>max)
		{
		arr[0]=arr[i];
		}
	}
		printf("max:%d",arr[0]);
}
