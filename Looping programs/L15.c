//WAP to compute sum of series: 12+22+...+102//
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=12;i<=102;i=i+10)
	{
		printf("%d+ ",i);
		sum=sum+i;
	}
	printf("\n sum= %d",sum);
	return 0;
}
