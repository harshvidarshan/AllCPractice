// sum of 5 numbers entered by numbers//
#include<stdio.h>
int main()
{
	int sum=0,n,i; 

	while(i<=5)
	{
	   	printf("enter sum: ");
	scanf("%d",&n);	
		sum=sum+n;
	i=i+1;
	}

	printf("Sum is=%d",sum);
	return 0;
	
}
