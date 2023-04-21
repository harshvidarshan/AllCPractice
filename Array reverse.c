//WAP to read 1 to 10 numbers and print array in reverse order//
#include<stdio.h>
int main()
{
	int i,num[100],n,reverse;
	printf("Enter arrays: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter numbers from 1 to n: ");
		scanf("%d",&num[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",num[i]);
	}
	return 0;
}
