//largest of given three numbers using logical operator(&&)//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter num1: ");
	scanf("%d",&a);
		printf("Enter num2: ");
	scanf("%d",&b);
		printf("Enter num3: ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d is largest number");
	}
	else if(b>c && b>a)
	{	
		printf("%d is largest number");
	}
		else if(c>a && c>b)
		{
	printf("%d is largest number");
		}
	return 0;
}

