#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number a: ");
	printf("\n Enter number b: ");
	scanf("%d",&a);
	scanf("%d",&b);
    if(a%b == 0)
	{
		printf("a is Evenly divisible by b");
	}
	else
	{
		printf("a is Not Evenly divisible by b");
	}

	return 0;
}

