//bubble sort
#include<stdio.h>
void main()
{
	int n,i,j,temp,arr[100];
	printf("enter size of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("sorted array elements: ");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\n",i,arr[i]);
	}
}
