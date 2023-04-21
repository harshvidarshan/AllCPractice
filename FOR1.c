/* factors of n(for loop) */
#include<stdio.h>
int main()
{	
	int a,n,i=1;
	printf("Enter n:  ");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n %d",i);
		}
	}
	return 0;
}
