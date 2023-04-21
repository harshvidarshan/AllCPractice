//reverse number
#include<stdio.h>
int main(void)
{
	int n,rem,sum;
	printf("n: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
		printf("%d ",sum);
		sum=0;
}
