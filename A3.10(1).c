//electricity bill//
#include<stdio.h>
int main()
{
	float units,amt,ElectricityBill;
	printf("Enter consumed units: ");
	scanf("%f",&units);
	if(units<=50)
{	amt = (units*0.75);
}
    else if(units<=100)
  {
    	amt = (50 * 0.75)+((units-50)*0.85);
	}
	else if(units<=200)
	{
		amt = (50 * 0.75)+(50 * 0.85)+((units-100) * 1.50);
	}
	else if (units<=300)
	{
		amt = (50 * 0.75)+(50 * 0.85)+(100 * 1.50)+((units-200) * 2.20);
	}
	else
	{
		amt = (50 * 0.75)+(50*0.85)+(100 * 1.50)+(100*2.20)+((units-300)*3.00);
	}
	ElectricityBill = (amt + (amt * 0.2));
	printf("ElectricityBill =%0.2f Rupees",ElectricityBill);
	return 0;
}

