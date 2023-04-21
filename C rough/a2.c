//print array numbers and in reverse order..
#include<stdio.h>
int main()
{
	int i,arr[10];
	for(i=1;i<=3;i++)
	{
		printf("Enter array elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=3;i>=1;i--)
	{
		printf("\n Reverse order: %d",arr[i]);
	
	}
	return 0;
}
