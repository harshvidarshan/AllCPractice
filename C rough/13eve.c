//swap adjacent elements of one dimension array
#include<stdio.h>
void main()
{
	int i,n,a[100],temp,j;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array elements a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=2)
	{
			j=i;
			j++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("\nswapped elements:%d",a[i]);
	}
}
