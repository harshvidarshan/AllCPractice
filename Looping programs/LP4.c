//WAP to print given number in reverse order//
#include<stdio.h>
int main()
{
	int i,n;
	printf("n: ");
	scanf("%d",&n);
	for(i=n;i>=1;i=i-1)
	{
		printf("%d ",i);
	}
	return 0;
}
