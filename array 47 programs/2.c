//read 12 values of floating point array
#include<stdio.h>
int main()
{
	int i,arr[100],n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\nEnter array elements: ");
		scanf("%d",&arr[i]);
	}
	return 0;
}
