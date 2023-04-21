//n no.s in array then read two different numbers, replace 1st number with 2nd number in an array & print its index and final array
#include<stdio.h>
void main()
{
	int arr[100],n,i,a,b;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("\na: ");
	scanf("%d",&a);
	printf("\nb: ");
	scanf("%d",&b);
	for(i=0;i<=n;i++)
	{
		printf("Enter array elements arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
	if(arr[i]==a)
	{
		arr[i]=b;
		printf("\nenter index:%d",i);
	}
    }
	for(i=0;i<=n;i++)
	{
	printf("\nfinal array: %d",arr[i]);
    }
}
