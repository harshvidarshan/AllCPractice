//WAP to compute income tax when total income is given//
#include<stdio.h>
int main()
{
	int tax,income,totalin;
	printf("Enter income: ");
	scanf("%d",&income);
	if(income<=50000)
	{
		printf("\nNIL");
	}
	else if(income<=50001 && income>=60000)
	{
		tax=(10*income/100);
		printf("\n %d",tax);
	}
	else if(income<=60001 && income>=150000)
	{
		tax=((20*income/100));
		printf("\n %d",tax);
	}
	else
	{
			tax=((30*income/100));
		printf("\n %d",tax);
	}
	totalin=(15*tax/100);
	printf("\n %d",totalin);
	return 0;
}
