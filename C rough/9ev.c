//sum of all digit of given number
#include<stdio.h>
void main()
{
	int n,sum,i,m;
	printf("n:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		m=n%10;
		n=n/10;
		printf("\nreverse:%d",m);
		sum=sum+m;
	}
	printf("\nsum:%d",sum);
}
