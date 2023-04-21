//sum of number entered by user//
#include<stdio.h>
int main()
{
	int n,sum,i=1;
	sum=0;
	while(i<=5)
	{
		printf("Enter n: ");
		scanf("%d",&n);
		i=i+1;
		sum=sum+n;
	}
	printf("Sum is = %d",sum);
	return 0;
}

