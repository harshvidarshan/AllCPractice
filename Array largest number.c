//to find largest array element//
#include<stdio.h>
int main()
{
	int i,n,num[i],largest;
	printf("Enter number of arrays: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number: ");
		scanf("\n%d",&num[i]);
	}
	largest=num[0];
	for(i=0;i<n;i++)
	{
	    if(num[i]>largest)
	    largest=num[i];
	}
		printf("\n%d is largest number",largest);
	return 0;
}
