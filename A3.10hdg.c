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
    else if(units>50 && units<=100)
    {
    	amt =((units-50)*0.85);
	}
	else if(units>100 && units<=150)
	{
		amt =((units-50) * 1.50);
	}
	else if (units>150 && units<=200)
	{
		amt = ((units-50) * 2.20);
	}
	else
	{
		amt =((units-50)*3.00);
	}
	ElectricityBill = (amt + (amt * 0.2));
	printf("ElectricityBill =%0.2f Rupees",ElectricityBill);
	return 0;
}

