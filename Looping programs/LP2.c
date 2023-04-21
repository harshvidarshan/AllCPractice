//WAP to find 1+1/2+1/3+..+1/n.
#include<stdio.h>
int main()
{
	int n;
	float i=0,sum=0.00;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  for(i=1;i<=n;i++)
	  {
	  	sum=sum+(1.0/i);
	  }
	  printf("\n Sum of series:%0.2f",sum);
	}
	return 0;
}
