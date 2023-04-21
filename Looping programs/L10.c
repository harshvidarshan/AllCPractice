//WAP to print sum of odd numbers between 15 to 45//
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=15;i<=45;i++)
	{
		if(i%2!=0)
		{
			printf("%d+",i);
			sum=sum+i;
	}
	}
		printf("\n sum=%d",sum);
	return 0;
}
