#include<stdio.h>
//harmonic series:1+1/2+..
int main()
{
	/*int n,i;
	float sum=0,s;
	printf("n: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		sum=1+2/n;
		s+=sum+i/n;
		s=s/2;
	}
	printf("%f",s); */
	float sum;
	int n;
	sum=0;
	for(n=1;n<=10;++n)
	{
		sum=sum+1/(float)n;
		printf("%2d %6.4f\n",n,sum);
	}
	return 0;
}
