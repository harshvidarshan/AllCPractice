//calculate sum and average of array elements..
#include<stdio.h>
int main()
{
	int i,sum=0,arr[10],ave;
	for(i=1;i<=5;i++)
	{
	printf("Enter array elements: ");
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
	ave=sum/5;
	}
	printf("Sum of array entries:%d",sum);
	printf("\nAve of array entries:%d",ave);
	return 0;
}
