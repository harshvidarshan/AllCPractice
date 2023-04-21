//read n numbers in array and print it using pointer
#include<stdio.h>
void main()
{
	int i,arr[10],n=5,*m;
	for(i=0;i<n;i++)
	{
		printf("Enter array elements a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		m=&arr[i];
		printf("\nEnter array:%d",*m);
	}
}
