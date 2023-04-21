//sum of 1-2+3-4+5-6..
#include<stdio.h>
void main()
{
	int i,n,m1=0,m2=0,sum;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			m1=m1+i;	
		}
		else
		{
			m2=m2+i;
		}
	}
	sum=m1-m2;
	printf("sum:%d",sum);	
}
