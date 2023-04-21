#include<stdio.h>
int main ()
{
	int i=1,n;
	printf("Enter n: ");
	scanf("%d",&n);
	do
	{
		for(i<=n;i++)
		printf("\n n=%d is odd no.");
	
	}
	while(i%2 != 0);
	return 0;
}
