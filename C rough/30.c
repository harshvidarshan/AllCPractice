//selection sort
#include<stdio.h>
void main()
{
	int n,i,j,temp,arr[100],min;
	printf("enter size of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<=n;j++)
		{
			if(arr[j]<arr[i])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	printf("\n sorted elements are: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
}
