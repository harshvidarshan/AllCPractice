//sum of second and second last element of array../
#include<stdio.h>
int main()
{
	int i,arr[100],n;
	int sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Array elements: ");
		scanf("%d",&arr[i]);
	}
	sum=arr[n-2]+arr[1];
	printf("\nSum of second and second last element of array:%d",sum);
	return 0;
}
