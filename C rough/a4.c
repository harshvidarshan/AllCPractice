//largest array element
#include<stdio.h>
int main()
{
	int i,arr[i];
	for(i=1;i<=5;i++)
	{
		printf("Array elements: ");
		scanf("%d",&arr[i]);
		if(arr[i]>arr[1])
		{
		arr[1]=arr[i];
	}
	}
	printf("Largest element:%d",arr[1]);
	return 0;
}
