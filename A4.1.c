//WAP to print all natural numbers between n to 1//
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n%d",i);
	}
	return 0;
}
