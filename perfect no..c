//WAP that no. is perfect or not//
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		printf("%d+",i);
		sum=sum+i;
	}
	i=i+1;
}
printf("=%d",sum);
if(sum==n)
{
	printf("\n%d no. is perfect",n);
}
else
{
	printf("\n%d not perfect no.",n);
}
return 0;
	}
