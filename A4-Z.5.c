//print sum of series=1!+2!+...+n!//
#include<stdio.h>
int main()
{
	int i,n,fact=1,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
     for(i=1;i<=n;i++)
	{
		for(i=1;i<=n;i++)
	{
	fact=fact*i;
		sum+=fact;
	}
}
	printf("\nSum of series:= %d",sum);
	return 0;
}
