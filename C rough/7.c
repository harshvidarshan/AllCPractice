//array 1
#include<stdio.h>
int main()
{
	int i,arr[50],n,sum=0,oddsum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("array elements: ");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(arr[i]%2==0)
		{
			sum=sum+arr[i];
		}
		else
		{
			oddsum=oddsum+arr[i];
		}
	}
	printf("Enter even sum:%d",sum);
	printf("\nEnter oddsum:%d",oddsum);
	return 0;
}
