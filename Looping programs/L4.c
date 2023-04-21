//WAP that reads five no.s , for each line your program reads no. and print its adjacent asterisks//
#include<stdio.h>
int main()
{
int  i,a,b,c,d,e;
	printf("Enter any number(1-30): ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("*");
	}
	printf("\nEnter any number(1-30): ");
	scanf("\n%d",&b);
		for(i=1;i<=b;i++)
	{
		printf("*");
	}
	printf("\nEnter any number(1-30): ");
	scanf("\n%d",&c);
		for(i=1;i<=c;i++)
	{
		printf("*");
	}
	printf("\nEnter any number(1-30): ");
	scanf("\n%d",&d);
		for(i=1;i<=d;i++)
	{
		printf("*");
	}
	printf("\nEnter any number(1-30): ");
	scanf("\n%d",&e);
		for(i=1;i<=e;i++)
	{
		printf("*");
	}
	return 0;
}
