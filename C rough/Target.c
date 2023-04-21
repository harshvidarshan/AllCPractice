#include<stdio.h>
int main(void)
{
	int a[100],target,i,n,c,d;
	printf("Enter number of values to be entered in n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter target value:");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if((a[i]+a[i+1])==target)
		{
			c=a[i]; //to print values at index i
			d=a[i+1];
		printf("Output:[%d,%d]",i,i+1);
		}
	}
		printf("Output:[%d, %d]",c,d);
}
