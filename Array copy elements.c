//copy array elements to another array//
#include<stdio.h>
int main()
{
	int i,j,n,g[i],h[j];
	printf("Enter number of arrays: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements: ");
		scanf("%d",&g[i]);
	}
	for(i=0;i<n;i++)
	{
		h[j]=g[i]=g[n];
	}
	printf("\n%d",h[]);
	return 0;
}
