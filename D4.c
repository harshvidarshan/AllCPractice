#include<stdio.h>
int main()
{
    int a;
	printf("Enter number: ");
	scanf("%d",&a);
	if(a%6==0)
	{
		printf("Evenly divisible by 6");
	}
	else if(a%7==0)
	{
		printf("Evenly divisible by 7");
	}
	else
	{
		printf("Not Evenly divisible by 6 or 7");
	}
	return 0;
}

