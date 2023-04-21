//wap sum using for loop//
#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i<=5;i=i+1;sum=sum+n)
	{
		printf("Sum is = %d\n",sum);
	}
	return 0;
}
