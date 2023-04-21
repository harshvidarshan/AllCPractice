//WAP that calculates and prints sum of even integers from 2 to 30//
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=2;i<=30;i++)
	{
		if(i%2==0)
		{
		printf("%d+",i);
		sum=sum+i;
	}
	}
	printf("\n sum=%d",sum);
	return 0;
}
