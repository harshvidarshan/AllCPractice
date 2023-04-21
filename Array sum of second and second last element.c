//sum of second and second last element of an array//
#include<stdio.h>
int main()
{
	int i,n,num[100];
	int totalsum;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&num[i]);
	}
	totalsum=num[i-2]+num[1];
	printf("\n Enter totalsum=%d",totalsum);
	return 0;
	
}
