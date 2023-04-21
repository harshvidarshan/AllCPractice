//total=1*1+2*2+..
#include<stdio.h>
int main()
{
	int i;
	float arr[10],sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter array elements: ");
		scanf("%f",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum+=arr[i]*arr[i];
	}
	printf("\n Sum of array elements:%f",sum);
}
