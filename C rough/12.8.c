//sum of series 1+(1/2)+(1/3)+...
#include<stdio.h>
void main()
{
	int i,n;
	float sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=1+1/(float)i;
	}
		printf("sum:%0.2f",sum);
}
