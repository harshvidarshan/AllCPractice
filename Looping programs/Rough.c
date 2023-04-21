//rough practice programs//
//1. to find largest element of array elements//
#include<stdio.h>
int main()
{
	int arr[1000],i,j,n,sum=0,ave,largest;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
{
	printf("Enter elements: ");
	scanf("%d",&arr[i]);
}
for(i=0;i<=n;i++)
{
	sum+=arr[i];
	ave=sum/(n+1);
}
for(i=0;i<=n;i++)
{
	if(arr[i]>largest)
	largest=arr[i];
}
printf("%d is largest of all",largest);
	printf("\n %d",sum);
	printf("\n ave:%d",ave);
	return 0;
}
