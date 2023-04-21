//WAP to sum the following series : sum=1-2+3-4...N//
#include<stdio.h>
int main()
{
	int i,N,sum=0;
	printf("N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("\n %d",i);
	}
	for(i=1;i<=N;i++)
	{     
	     sum=i-(i++)+(i+2)-(i+3);
	printf("sum=%d",sum);
}
	return 0;
}
