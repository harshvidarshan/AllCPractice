#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a , &b);
	if(a*b==100)
	{
		printf("Product is equal to 100");
	}
	else if(a*b>100)
	{
		printf("Product is greater than 100");
	}
	else
	{
		printf("Product is less than 100");
	}
	return 0;
}
