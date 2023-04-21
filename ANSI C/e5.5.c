//power distribution//
#include<stdio.h>
int main()
{
	int unit,num;
	float charge;
	printf("Number of customer: ");
	scanf("%d",&num);
	printf("Unit: ");
	scanf("%d",&unit);
	if(unit<=200)
	{
		charge=0.50*unit;
	}
	else if(unit>=201 && unit<=400)
	{
		charge=100+((unit-200)*0.65);
	}
	else if(unit>=401 && unit<=600)
	{
		charge=230+(unit-400)*0.80;
	}
	else
	{
		charge=390+(unit-600);
	}
	printf("Customer no:%d \tUnit:%d",num,unit);
	printf("\n Charges:%0.2f",charge);
	return 0;
}
